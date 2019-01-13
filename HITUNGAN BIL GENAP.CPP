#include<conio.h>
#include<stdio.h>
#include<iostream.h>

void main()
{
int a, penjumlahan;
cout<<"penjumlahan bilangan genap";
cout<<endl;
for(int a= 2; a <= 10; a=a+=2)
{
penjumlahan +=a;
if(a !=0)
{
cout<<a<<" + ";
}else{
cout<<"a";
}
a;
}
cout<<" = "<<penjumlahan;
getch();
}
