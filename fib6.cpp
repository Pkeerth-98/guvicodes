#include<iostream.h>
#include<conio.h>
int main()
{
int i=1,j=1,t,s=0,n;
cout<<"enter num";
cin>>n;
cout<<i<<"\t"<<j;
while(s<n)
{
 s=j+i;
cout<<"\t"<<s;
   i=j;
   j=s;
}getch();
return 0; 
}
