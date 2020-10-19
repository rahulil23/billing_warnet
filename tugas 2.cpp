#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<windows.h>


using namespace std;
int main() {
	int gol,gaji,lembur,glembur,gbersih,normal;
	float jumlah;
	string nama;
	system("color a");
	cout<<endl;
	cout<<" Nama          : muhammad rahulil "<<endl;
	cout<<" nim           : 20051397043"<<endl;
	cout<<" kelas         : 2020 A"<<endl;  
	cout<<" Mata Kuliah   : Algoritma & Pemrograman 1"<<endl;
	cout<<endl;
	cout<<"========================================================="<<endl;
	cout<<endl;
	cout<<"========================================================="<<endl;
	cout<<endl;
	cout<<"============SELAMAT DATANG KARYAWAN PT MAKMUR============\n";
	cout<<"=================SILAHKAN CEK GAJI ANDA==================\n";
	cout<<"nama karayawan	: ";
	cin>>nama;
	cout<<"golongan	: ";
	cin>>gol;
	cout<<"jumlah jam kerja: ";
	cin>>jumlah;
	cout<<"=========================================================\n";
	
	
	switch (gol){
		case 1 :
			gaji=5000;
			break;
		case 2 :
			gaji=7000;
			break;
		case 3 :
			gaji=8000;
			break;
		case 4 :
			gaji=10000;
			break;
		default :
			cout<<" [ Pilihan Diluar Jangkauan ] "<<endl;
	}
	if (jumlah>48){
		lembur=jumlah-48;
		normal=48*gaji;
		
	}
	else{
		lembur=0;
		normal=jumlah*gaji;
	}
	glembur=lembur*4000;
	gbersih=glembur+normal;
	
	
	cout<<"============PROGRAM MENGHITUNG GAJI KARYAWAN============="<<endl;
	cout<<endl;
	
	cout<<"Nama                 : "<<nama<<endl;
	cout<<"Gaji Pokok           : "<<normal<<endl;		
	cout<<"Gaji Lembur          : "<<glembur<<endl;
	cout<<"Gaji Diterima        : "<<gbersih<<endl;
	cout<<"ambilah gaji anda di loket!\n";
	cout<<endl<<endl;
	cout<<"============TERIMA KASIH ATAS KERJA SAMA ANDA============\n";
	
}
	
