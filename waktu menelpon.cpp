#include<iostream>

const int biaya = 100;
int main ()
{
	int satuanpulsa, totalbiaya, lamapercakapan, sisapercakapan;
	typedef struct {
		
	int j;
	int m;
	int d;
		
	} jam;
	jam waktu;
	
	std::cout<<"masukan lama percakapan (dalam detik ) : ";
	std::cin>>lamapercakapan;
	satuanpulsa = lamapercakapan / 5;
	totalbiaya = satuanpulsa * biaya;
	waktu. j= lamapercakapan/3600;
	sisapercakapan = lamapercakapan%3600;
	waktu.m= sisapercakapan/60;
	waktu.d= sisapercakapan%60;
	std::cout<<"total biaya : Rp. "<<totalbiaya<<std::endl;
	std::cout<<"lama percakapan "<<waktu.j<<" jam "<<waktu.m<<" menit "<<waktu.d<<" detik";
	return 0;
}
