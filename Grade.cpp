#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int nilai;
	
	cout<<"masukkan nilai anda : ";
	cin>>nilai;
	
	if(nilai>=81 && nilai<=100)
	cout<<"Nilai anda=A Keterangan=Lulus";
	
	else if (nilai>=61 && nilai<=80)
	cout<<"Nilai anda=B Keterangan=Lulus";
	
	else if (nilai>=41 && nilai<=60)
	cout<<"Nilai anda=C Keterangan=Lulus";
	
	else if (nilai>=25 && nilai<=40)
	cout<<"nilai anda=D Keterangan=Ulang";
	
	else if (nilai>=5 && nilai<=20)
	cout<<"nilai anda=E Keterangan ulang";
	
	else "Nilai yang anda masukkan salah";
	
	getch();
	
}
