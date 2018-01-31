#include<iostream.h>
#include<conio.h>
int main()
{
int n,m,i,t=0;
cout<<"enter 2 num";
cin>>n>>m;
i=n;
    n=t^m;
    m=t^i;
cout<<"swap num"<<n<<"\t"<<m;
    return 0;
}
