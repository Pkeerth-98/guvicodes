#include<iostream.h>
#include<conio.h>
int main()
{
    int n,s,i;
    cout<<"enter num";
    cin>>n;
    while(n!=0)
    {
    i=n%10;
    s=s*10+i;
    n/=10;
    }
cout<<"reversed num"<<s;
getch();
return 0;
}
