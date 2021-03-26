#include<iostream>
#include<string>
const float perkomisi = 0.05;
int main ()
{
	std::string namasalesman;
	float komisi, nilaipenjualan;
	std::cout<<"masukan salesman : ";
	getline(std::cin,namasalesman);
	std::cout<<"masukan total penjualan : Rp. ";
	std::cin>>nilaipenjualan;
	komisi = nilaipenjualan * perkomisi ;
	std::cout<<"Besar komisinya : Rp ."<<komisi<<std::endl;
	return 0;
}
