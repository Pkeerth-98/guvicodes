#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c;
cout<<"enter the 3 values";
cin>>a>>b>>c;
if((a>b)&&(a>c))
cout<<"%d is the largest num"<<a;
if((b>c)&&(b>a))
cout<<"%d is the largest num"<<b;
if((c>b)&&(c>a))
cout<<"%d is the largest num"<<c;
return 0;
}
