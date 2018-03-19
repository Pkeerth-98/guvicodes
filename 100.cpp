#include<iostream.h>
#include<conio.h>
int main()
{
    int n,i,s=1;
    cout<<"enter num";
    cin>>n;
       while(n!=0)
    {
    i=n%10;
    s=s*i;
    n/=10;
    }
    cout<<"ans is"<<s;
 getch();   
return 0;
}
