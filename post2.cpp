#include <iostream>

using namespace std;

int main (){
	
	string name,birthDay,gender,address;
	string village,district,religion,job;
	string status,nationality, exp,goldar;
	int rt,rw;
	long nik;
	
	name = "Reza Muchamad Hafis";
	nik = 12368238;
	birthDay = "Kendal -  19 Oktober 2005";
	gender = "Laki-Laki";
	address = "Jalan Monjali";
	village = "Gunung Jati";
	goldar = "O";
	district = "Weleri";
	religion = "Islam";
	status = "Lajang";
	nationality = "WNI";
	job = "Mahasiswa";
	exp = "SEUMUR HIDUP";
	rt = 9;
	rw = 6;
	
	
	cout <<"\t\t\tPROVINSI   JAWA   TENGAH"<<endl;
	cout<<"\t\t\t   KABUPATEN MAGELANG"<<endl;
	cout<<endl<<endl;
	cout<<"\tNIK\t\t\t\t:"<<nik<<endl;
	cout<<"\tTempat Tanggal Lahir\t\t:"<<birthDay<<endl;
	cout<<"\tJenis Kelamin\t\t\t:"<<gender<<"\t\tGoldar :"<<goldar<<endl;
	cout<<"\tAlamat\t\t\t\t:"<<address<<endl;
	cout<<"\t\tRT/RW\t\t\t:"<<rt<<"/"<<rw<<endl;
	cout<<"\t\tKelurahan/Desa\t\t:"<<village<<endl;
	cout<<"\t\tKecamatan\t\t:"<<district<<endl;
	cout<<"\tAgama\t\t\t\t:"<<religion<<endl;
	cout<<"\tStatus Perkawinan\t\t:"<<religion<<endl;
	cout<<"\tPekerjaan\t\t\t:"<<job<<endl;
	cout<<"\tKewernegaraan\t\t\t:"<<nationality<<endl;
	cout<<"\tBerlaku Hingga\t\t\t:"<<exp<<endl;
	
	
}
