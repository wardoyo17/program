#include <iostream.h>
#include <conio.h>
int main(){
int i,j,c;
cout<<"Bilangan Prima Antara 1-100 :\n\n";
for(i=1;i<=100;i++)
{
c=0;
for(j=1;j<=i;j++){
if(i%j==0){c=c+1;}
}
if (c==2)cout<<i<<" ";
}
getch();
return 0;
}
