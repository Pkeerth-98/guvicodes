#include<iostream.h>
#include<conio.h>
int main()
{
int i,flag=0;
char a[100];
cout<<"enter string";
cin>>a[100];
for(i=0;i<100;i++)
{
if(isdigit(a[i])||isalpha(a[i]))
flag++;;
}
if(flag!=0)
cout<<"yes";
else
cout<<"no";
getch();
return 0;
}
