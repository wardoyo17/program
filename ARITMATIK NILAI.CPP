#include <iostream.h>
#include <conio.h>

void menu();
void pilihan(int x);
int aritmatik(int a,int b);

void main()
{
 int pil;
 menu();
 cout<<"pilih menu : ";
 cin>>pil;
 cout<<endl;
 pilihan(pil);
}
void menu(){
 cout<<"			MENU UJIAN			"<<endl;
 cout<<"========================="<<endl;
 cout<<"=	1. LOOPING				"<<endl;
 cout<<"=	2. ARITMATIK			"<<endl;
 cout<<"=	3. LOOPING				"<<endl;
 cout<<"========================="<<endl;
}
void pilihan(int x)
{
		int x1,y1;
      switch(x)
      {
      			case 1:
               {
               			cout<<"pilih nomor 1 ya..";
               }
               break;
               case 2:
               {
               			cout<<"nilai 1 : ";
                        cin>>x1;
                        cout<<"nilai 2 : ";
                        cin>>y1;
                        cout<<endl;
                        cout<<x1<<" * "<<y1<<" = "<<aritmatik(x1,y1);
               }
               break;
               case 3:
               {

               			cout<<"pilih nomer 1 ya..";
               }
               break;
               default :
               {
               			cout<<"salah pilih";
               }
	}
	getch();
}
int aritmatik(int a, int b)
{
		return a*b;
}
