//*muhammad rahulil*//
//*tugas billing net*//



#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

int main (){
	int j1,m1,j2,m2,tot_waktu,tot_bayar,total_menit_mulai,total_menit_selesai,durasi,lama_pemakaian,menit_pemakaian;
	char name_user[50];
	system("color 1");
	 cout<<"--------selamat datang billing net-----------\n";
	 cout<<"-------------muhammad rahulil----------------\n";
	 cout<<"----------------20051397043------------------\n";
	 cout<<"_____________________________________________\n";
	 cout<<"_____________________________________________\n";
	 cout<<"name user=";
	 cin>>name_user;
	 cout<<"------------------mulai----------------------\n";
	 cout<<"jam=";
	 cin>>j1;
	 cout<<"menit=";
	 cin>>m1;
	 total_menit_mulai=(j1*60)+m1;
	 cout<<"---------------------------------------------\n";
	 cout<<"---------------------------------------------\n";
	 cout<<"-----------------selesai---------------------\n";
	 cout<<"jam=";
	 cin>>j2;
	 cout<<"menit=";
	 cin>>m2;
	 total_menit_selesai=(j2*60)+m2;
	 cout<<"---------------------------------------------\n";
	 cout<<"---------------------------------------------\n";
	 durasi=total_menit_selesai-total_menit_mulai;
	 tot_bayar=durasi*5000/60;
	 lama_pemakaian=durasi/60;
	 menit_pemakaian=durasi%60;
	 cout<<"--------------lama pemakaian-----------------\n";
	 cout<<"jam:"<<lama_pemakaian<<endl;
	 cout<<"menit:"<<menit_pemakaian<<endl;
	 cout<<"----------------membayar---------------------\n";
	 cout<<"total yang harus anda bayar="<<tot_bayar<<endl;
	 cout<<"tarif per jam=5000\n";
	 cout<<"_____________________________________________\n";
	 cout<<"_____________________________________________\n";
	 cout<<"_______________TERIMA KASIH__________________\n";
	 return 0;
}
