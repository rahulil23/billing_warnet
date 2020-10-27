#include<iostream>

#include<conio.h>

#include<iomanip>

using namespace std;

main(){

int i,j,n;

cout<<"masukan angka untuk tabel : ";
cin>>n;
 

		for (i=1;i<=n;i++)
		{ cout<<setw(5)<<i;


		for (j=2;j<=n;j++)

		cout<<setw(5)<<j;
	
		cout<<endl;

		}

getch();

}
