#include<iostream>
#include<string>
using namespace std;
const float persentunjangan = 0.2;
const float  persenpajak= 0.15;

int main()
{
	int gajihbersih, gajipokok, pajak, tunjangan, gol;
	string namakaryawan;
	cout<<"===================take home pay (gajih bersih)================="<<endl;
	cout<<"nama karyawan :";
	getline(cin, namakaryawan);
	cout<<"masukan golongan :";
	cin>>gol;
	switch (gol){
		case 1 :
			gajipokok = 1925560 ;
			break;
		case 2:
			gajipokok = 2115371 ;
			break;
		case 3 :
			gajipokok = 3000000 ;
			break;
	} 
	
	tunjangan = persentunjangan*gajipokok;
	pajak = persenpajak*gajipokok;
	gajihbersih = gajipokok+tunjangan-pajak ;
	
	cout <<"tunjangan : RP. "<<tunjangan<<endl;
	cout <<"pajak :Rp. "<<pajak<<endl;
	cout<<"gaji bersih :Rp. "<<gajihbersih<<endl;
	
	return 0;
}
