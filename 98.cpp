#include<iostream.h>
#include<conio.h>
int main()
{
    int n,i,t,a[n];
    cout<<"enter num";
    cin>>n;
    cout<<"enter "<<n<<"num in ascending order with single change";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0,t=1;i<n;i++,t++)   
    {
        if(a[i]!=t)
          a[i]=t;
    }
    cout<<"\narrange num";
    for(i=0;i<n;i++)
            cout<<a[i];
     getch();   
    return 0;
}
