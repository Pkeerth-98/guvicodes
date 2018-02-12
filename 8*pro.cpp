#include<iostream.h>
#include<conio.h>
int main()
{
int n,i;
char a[n];
cout<<"enter string length";
cin>>n;
cout<<"enter string";
cin>>a[n];
if(n%2==0)
{
a[n/2]='*';
a[(n/2)+1]='*';
}
else
{
    a[n/2+1]='*';
    
}
for(i=0;i<n;i++)
cout<<a[i];
return 0;
getch();
}
