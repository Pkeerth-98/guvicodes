#include<iostream.h>
#include<conio.h>
int main()
{
char a[50],b[50];
cout<<"enter the string 1";
cin>>a[50];
cout<<"enter string 2";
cin>>b[50];
if(strlen(a)>strlen(b))
cout<<"string 1 is greater"<<a;
else if(strlen(a)<strlen(b))
cout<<"string 2 is greater"<<b;
else
cout<<b;
getch();
return 0;
}
