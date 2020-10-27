 //meghitung deret dengan penentu
#include <iostream>
#include <conio.h>
using namespace std;



int main()
{
int a=0, b, c, jumlah=0, i, n;

cout<<" Menghitung Jumlah deret Bilangan \n";
cout<<" \n";
cout<<"======================================================\n";
cout<<"Masukkan bilagan awal :"; cin>>a;
cout<<"Masukkan beda :"; cin>>b;
cout<<"Masukkan jumlah deret ke-n :"; cin>>n;
cout<<"=======================================================\n";
cout<<" \n";
cout<<"deret ke-"<<n<<" : ";
cout<<a<<",";
jumlah = jumlah+a;

for (i=0; i<n-1; i++)
{
c = a+b;
a=c;
cout<<c<<",";
jumlah = jumlah + c;
}
cout<<" \n";
cout<<"jumlah deret ke-"<<n<<" : ";
cout<<jumlah;
getch ();
return 0;
}
