#include <iostream>
using namespace std;

int main() {
	string nama;
	float nilai1, nilai2, nilai3, rataRata;
	string hadiah;
	
	cout<<"PROGRAM HITUNG RATA RATA"<<
	endl;
	cout << "Nama siswa" ;
	getline (cin,nama) ;
	
	cout << "Nilai pertandingan I" ;
	cin>>nilai1;
	
	cout << "Nilai pertandingan II" ;
	cin >> nilai2 ;
	
	cout << "Nilai pertandingan III" ;
	cin >> nilai3 ;
	
	rataRata = (nilai1+nilai2+nilai3)/3 ;
	
	if (rataRata >=85){
			hadiah= "Seperangkat Mobil" ;
	}else if (rataRata>=70) {
		hadiah="Uang sebesar Rp. 500.000";
	}else {
		hadiah= "Hiburan" ;
	}
	
	cout << "Siswa yang bernama" << nama;
	cout << "memperoleh nilai rata-rata" << nama;
	cout << "dari hasil perlombaan yang diikutinya" << endl;
	cout << "Hadiah yang didapat adalah" << hadiah << endl;
	
	return 0;
}
