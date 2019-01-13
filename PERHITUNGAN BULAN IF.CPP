#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main()
{
char kode_bulan;
cout<<"==================================="<<endl;
cout<<"inputkan kode bulan 1 s/d 12 : ";cin>>kode_bulan;
cout<<"***********************************"<<endl;
if(kode_bulan == '1')
	cout<<"Bulan : Januari";
else
if(kode_bulan == '2')
	cout<<"Bulan : Februari";
else
if(kode_bulan == '3')
	cout<<"Bulan : Maret";
   else
if(kode_bulan == '4')
	cout<<"Bulan : April";
else
if(kode_bulan == '5')
	cout<<"Bulan : Mei";
else
if(kode_bulan == '6')
	cout<<"Bulan : Juni";
else
if(kode_bulan == '7')
	cout<<"Bulan : Juli";
else
if(kode_bulan == '8')
	cout<<"Bulan : Agustus";
else
if(kode_bulan == '9')
	cout<<"Bulan : September";
else
if(kode_bulan == '10')
	cout<<"Bulan : Oktober";
else
if(kode_bulan == '11')
	cout<<"Bulan : November";
else
if(kode_bulan == '12')
	cout<<"Bulan : Desember";
else
	{
   cout<<endl;
   cout<<"kode hari yang anda inputkan salah :";
   cout<<endl;
   }
cout<<"                                       "<<endl;
getch();
}

