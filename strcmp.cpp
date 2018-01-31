#include<iostream.h>
#include<conio.h>
int main()
{
char a[50],b[50];
cout<<"\nenter the string 1";
cin>>a[50];
cout<<"\nenter string 2";
cin>>b[50];
if(strlen(a)>strlen(b))
cout<<"\nstring 1 is greater"<<a;
else if(strlen(a)<strlen(b))
cout<<"\nstring 2 is greater"<<b;
else
cout<<"\n"<<b;
getch();
return 0;
}
