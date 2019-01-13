#include<conio.h>
#include<stdio.h>
#include<iostream.h>

void main()
{
int a, penjumlahan;
cout<<"penjumlahan bilangan ganjil";
cout<<endl;
for(int  a=1; a  <= 19; a=a+=2)
{
penjumlahan +=a;
if(a !=19)
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
