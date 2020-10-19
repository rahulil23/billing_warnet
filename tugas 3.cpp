#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;
int main() {
	float L,K,M,A,T,hasil;
	char kode;
	system("color b");
	cout<<endl;
	cout<<" Nama          : muhammad rahulil "<<endl;
	cout<<" nim           : 20051397043"<<endl;
	cout<<" kelas         : 2020 A"<<endl;  
	cout<<" Mata Kuliah   : Algoritma & Pemrograman 1"<<endl;
	cout<<endl;
	cout<<"================================================="<<endl;
	cout<<endl;
	cout<<"kode penyelesaian segitiga\n";
	cout<<"	1	: mencari sisi miring\n";
	cout<<"	2	: mencari luas\n";
	cout<<"	3	: mencari keliling\n";
	cout<<"pilih kode penyelesaian [1/2/3] :  ";
	
	
	kode=getche();
	switch (kode){
		case '1':{
			cout<<endl;
			cout<<"rumus mencari sisi miring segitiga\n";
			cout<<"masukan alas		:";
			cin>>A;
			cout<<"masukan tinggi		:";
			cin>>T;
			cout<<"==================================================\n";
			M=sqrt((A*A)+(T*T));
			cout<<"sisi miring segitiga	:"<<M<<endl;
			break;
			
		}
		case '2':{
			cout<<endl;
			cout<<"rumus mencari luas segitiga\n";
			cout<<"masukan alas		:";
			cin>>A;
			cout<<"masukan tinggi		:";
			cin>>T;
			cout<<"==================================================\n";
			L=A*T*1/2;
			cout<<"luas segitiga		:"<<L<<endl;
			break;
		}
		case '3':{
			cout<<endl;
			cout<<"rumus mencari keliling segitiga\n";
			cout<<"masukan alas		:";
			cin>>A;
			cout<<"masukan tinggi		:";
			cin>>T;
			cout<<"==================================================\n";
			M=sqrt((A*A)+(T*T));
			K=M+A+T;
			cout<<"keliling segitig	:"<<K<<endl;
			break;
		}
		default:
			cout<<endl;
			cout<<" [ Pilihan Diluar Jangkauan ] "<<endl;
		
		
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout << "sememoga anda belajar dengan nyaman\n";
	cout<<"           |========|            |========|                 \n";
	cout<<"           |==    ==|            |==    ==|                 \n";
	cout<<"           |========|            |========|                 \n";
	cout<<"                                                        \n";
	cout<<"                   ==========                           \n";
	cout<<"                   ==========                           \n";
	getch();
return 0;

}
