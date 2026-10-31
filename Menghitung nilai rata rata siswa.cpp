#include <iostream>
#include <iomanip>
using namespace std;

/*program utama*/
int main ()
{
	string npm, nama;
	float tugas1, tugas2, tugas3, ratarata;
	
	// Layar Masukkan
	cout<<"NILAI RATA-RATA"<<endl;
	cout<<"NPM       :";
	cin>>npm;
	
	cin.ignore();
	cout<<"Nama       :";
	getline(cin,nama);
	
	cout<<"Nilai Tugas I    :";
	cin >> tugas1;
	
	cout<<"Nilai Tugas II    :";
	cin>> tugas2;
	
	
	// Menghitung nilai rata-rata
	ratarata=(tugas1+tugas2+tugas3)/3;
	
	// Layar Keluaran
	cout<<"\nLAYAR KELUARAN"<< endl;
	cout<<"NPM"<<npm<<"Siswa yang bernama"<<nama<<endl,
	cout<<"Memperoleh nilai rata-rata"<<fixed<<setprecision(2)<<ratarata<<"dari hasil tugas yang diikutinya."<<endl;
	
	return 0;
}
