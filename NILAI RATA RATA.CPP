#include<stdio.h>
#include<conio.h>
#include<iostream.h>
                                              
void main()
{
char nim[9],nama[13];
int ntI,ntII,ntIII,ntVI;
float rata;
cout<<"\t\t***************************************\n";
cout<<"\t\tPROGRAM HITUNG NILAI RATA-RATA \n";
cout<<"\t\t***************************************\n";
cout<<"\nNim Siswa	 :	";cin>>nim;
cout<<"\nNama Siswa	 :	";gets(nama);
cout<<"\nNilai Tugas I	 :	";cin>>ntI;
cout<<"\nNilai Tugas II	 :  	";cin>>ntII;
cout<<"\nNilai Tugas III  :  	";cin>>ntIII;
cout<<"\nNilai Tugas VI	 :      ";cin>>ntVI;
cout<<"*******************************************\n";
rata=(ntI+ntII+ntIII+ntVI)/4;
cout<<"Nim	:"<<nim;
cout<<" Siswa yang bernama ' "<<nama;
cout<<" ' Nilai rata-rata yang saya "<<endl;
cout<<" Peroleh dari hasil tugas yang diberikan adalah \n"<<rata;
getch();
}