#include<iostream.h>
int main()
{
int l,w,h,a;
cout<<"enter length,height,width of cuboid";
cin>>l>>h>>w;
a=(2*l*w)+(2*l*h)+(2*h*w);
cout<<"\ntotal surface area is"<<a;
cout<<"\n volume of cuboid"<<l*h*w;
return 0;
}
