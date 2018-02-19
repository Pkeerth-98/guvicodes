#include<iostream.h>
#include<conio.h>
int main()
{int n;
    int a[n][2],i,j;
    cout<<"enter no .of input";
cin>>n;
cout<<"enter no.of person in each team";
for(i=0;i<n;i++)
{
for(j=0;j<2;j++)
cin>>a[i][j];
}
<<"difference";
for(i=0;i<n;i++)
cout<<"\n"<<a[i][0]-a[i][1];
getch();
  return 0;
}
