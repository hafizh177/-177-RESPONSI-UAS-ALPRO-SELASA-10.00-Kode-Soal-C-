#include <iostream>
#include <fstream>
using namespace std;

struct barang {
	string namaBarang[3][3]={{"air","aqua","auah"},{"F-1","F-2","F-3"}};
	int hargaBarang[3][3]={{1,2,3},{5000,5000,5000}};
};

void cari_kode	(barang &b){
	string cari;
	int index;
	cout<<"CARI BARANG BERDASARKAN KODE"<<endl;
	cout<<"Masukkan Kode : ";
	cin>>cari;
	
	for (int i=0;i<3;i++){
		if (cari==b.namaBarang[0][i]){
			index=i;
		}
	}
	cout<<"Kode Barang : "<<b.namaBarang[0][index]<<endl;
	cout<<"Nama Barang : "<<b.namaBarang[1][index]<<endl;
	cout<<"Harga Barang : "<<b.hargaBarang[0][index]<<endl;
	cout<<"Stok Barang : "<<b.hargaBarang[1][index]<<endl;
	cout<<endl;
	ofstream file("hasil_sort_penjualan.txt");
	file<<"Kode Barang : "<<b.namaBarang[0][index]<<endl;
	file<<"Nama Barang : "<<b.namaBarang[1][index]<<endl;
	file<<"Harga Barang : "<<b.hargaBarang[0][index]<<endl;
	file<<"Stok Barang : "<<b.hargaBarang[1][index]<<endl;
	file<<endl;
}

/*void urut_dari_mahal{
	

}

void urut_dari_ murah{
	

}

void cari_buku{


}*/

int main(){
	int cari_kode,barang_murah;
	cout<<"Cari Barang Berdasarkan kode: \n";
	cin>>cari_kode;
	cout<<"Cari Barang Termurah berdasarkan harganya: \n";
	cin>>barang_murah;
};