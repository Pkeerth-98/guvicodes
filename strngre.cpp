#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
int i;
char a[100],b[100];
cout<<"enter the string";
gets(a);
b=strrev(b);
i=strcmp(a,b);
if(i==0)
cout<<"palindrome";
else
cout<<"not a palindrome";
getch();
return 0;
}
