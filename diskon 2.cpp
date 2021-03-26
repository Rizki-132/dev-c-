#include<iostream>
using namespace std;

int main()
{
	int pembelian, diskon, jumtot, bayar;
	char status;
	cout<<"============PROGRAM MENGHITUNG DISKON============="<<endl;
	cout<<"|                                                 |"<<endl;
	cout<<"Diskon:                                           "<<endl;
	cout<<"pembelian Rp. 0 sapamai 25.000 = 0%               "<<endl;
	cout<<"pembelian Rp. 25.000 sampai 50.000 = 10%          "<<endl;
	cout<<"pembelian Rp. 50.000 sapamai 100.000 = 12.5%      "<<endl;
	cout<<"pembelian lebih dari Rp. 100.000 = 15%            "<<endl;
	cout<<"=====================================================\n"<<endl;
	do{
		
		
	cout<<"masukan total pembelian      :Rp. ";
	cin>>pembelian;
	if (pembelian <= 25000)
	{
		diskon = pembelian * 0 ;
		jumtot = pembelian - diskon;
		cout << "disokon 0%            : Rp. "<<diskon<<endl;
		cout<<"total yang harus di bayar : Rp. "<<jumtot<<endl;
		cout<<"bayar                     :Rp. ";
		cin>>bayar;
		cout<< "kembali                   : Rp. "<<bayar-jumtot<<endl;
		cout <<"---------------------------------"<<endl;
	}
	else if( pembelian <= 50000)
	{
		diskon = pembelian * 0.10 ;
		jumtot = pembelian - diskon;
		cout<<"diskon 10%                : Rp. "<<diskon<<endl;
		cout<<"total yang harus di bayar : Rp. "<<jumtot<<endl;
		cout<<"bayar                     :Rp. ";
		cin>>bayar;
		cout<< "kembali                   : Rp. "<<bayar-jumtot<<endl;
		cout <<"---------------------------------"<<endl;
	}
	else if (pembelian <=100000)
	{
			diskon = pembelian * 0.10 ;
		jumtot = pembelian - diskon;
		cout<<"diskon 12.5%                : Rp. "<<diskon<<endl;
		cout<<"total yang harus di bayar : Rp. "<<jumtot<<endl;
		cout<<"bayar                     :Rp. ";
		cin>>bayar;
		cout<< "kembali                   : Rp. "<<bayar-jumtot<<endl;
		cout <<"---------------------------------"<<endl;
	}
	else if (pembelian >= 100000)
	{
			diskon = pembelian * 0.10 ;
		jumtot = pembelian - diskon;
		cout<<"diskon 15%                : Rp. "<<diskon<<endl;
		cout<<"total yang harus di bayar : Rp. "<<jumtot<<endl;
		cout<<"bayar                     :Rp. ";
		cin>>bayar;
		cout<< "kembali                   : Rp. "<<bayar-jumtot<<endl;
		cout <<"---------------------------------"<<endl;
	}
	else {
		cout<<"masukan jum;ah belanja"<<endl;
	}
	    cout <<"\n lagi [Y/N]? ";
	    cin>>status;
	    cout<<"--------------------------------\n";
	} while (status =='Y'|| status=='y');
	   cout<<"\terimakasih"<<endl;
	
	cin.get();
	
	return 0;
}
