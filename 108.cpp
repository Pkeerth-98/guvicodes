#include<iostream.h>
#include<conio.h>
int main()
{
    int a,d,n,x;
    cout<<"enter initial,difference,num value";
    cin>>a>>d>>n;
    x=a+(n-1)*d;
        cout<<n<<"th term"<<x;
        cout<<"\nAp sum is"<<(a+x)*n/2;
    getch();   
    return 0;
}
