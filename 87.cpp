#include<iostream.h>
#include<conio.h>
int main()
{
int n,m,r,i;
cout<<"enter 2 num";
cin>>n>>m;
if(m>n)
{
r=m%n;
while(r!=0)
{
i=r;
r=n%r;
}
cout<<"gcd is"<<i;
}
else
{r=n%m;
while(r!=0)
{
i=r;
r=m%r;
}
cout<<"gcd is"<<i;
}
return 0;
getch();
}
