#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   char a[100];
    int i=0,n;
    cout<<"enter string";
    cin>>a[100];
   while(a[i]==' ')
   {
       n=a[i];
       n-=33;
       a[i]=n;
       i++;
   }
   
    getch();   
    return 0;
}
