#include<iostream.h>
#include<conio.h>
int main()
{int i,n;
cout<<"enter num";
cin>>n;
if(n!=0)
{i=n%10;
if(i%2!=0)
cout<<i;
n=n/10;
}
getch();
return 0;
}
