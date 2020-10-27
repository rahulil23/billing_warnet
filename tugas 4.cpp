#include<iostream>
#include<conio.h>
#include<math.h> 
using namespace std;
main (void){
	int jumbil,pangkat,n,i,jp;
	cout<<"menghitung jumlah deret ke n\n";
	cout<<"masukan deret ke n: ";
	cin>>n;
	cout<<"=======================================\n";
	jumbil=0;
	jp=0;
	for ( i=1;i<=n;i++){
	
	pangkat=i*i*i;
	jumbil=jumbil+i;
	jp=jp+pangkat;
	cout<<i<<" ="<<pangkat<<endl;

}
	cout<<"========================================\n";
	cout<<jumbil<<" "<<jp<<endl;
	
}
