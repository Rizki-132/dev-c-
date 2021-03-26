#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int npm, lahir;
	char jurusan[25], nomerhp [12];
	string alamat, nama;
	cout<<"================Biodata Mahasiswa================="<<endl;
	cout<<"input nama anda :";
	getline(cin ,nama);
	cout<<"masukan NPM :";
	cin>>npm;
	cout << "alamat :";
	cin>>alamat;
	cout<<"tanggal lahir :";
	cin>>lahir;
	cout<<"nomer handphon :";
	cin>>nomerhp;
	cout<<"jurusan  :";
	cin>>jurusan;

	system ("cls");
	
	cout<<"nama :"<<nama<<endl;
	cout<<"NPM :"<<npm<<endl;
	cout<<"alamat :"<<alamat<<endl;
	cout<<"tanggal lahir :"<<lahir<<endl;
	cout<<"nomer handphon :"<<nomerhp<<endl;
	cout<<"jurusan :"<<jurusan<<endl;

	
	
	return 0;
}
