/*
Nama : Ahmad Hasby Bik
Npm : 20081010032
*/
#include<iostream>

using namespace std;
class prismasegitiga{
	
private:
	float alassegitiga;
	float tinggisegitiga;
	float rusukprisma;
	
public:
    float keliling, luas, volume;
	
	float prisma(float alas, float tinggi, float rusuk) {
      alassegitiga = alas;
      tinggisegitiga = tinggi;
      rusukprisma = rusuk;
    }

    prismasegitiga(){ // contructor 1
    	luas=0;
    cout << "constructor 1 muncul" << endl;
	}
	
	prismasegitiga(float alas, float tinggi){ // contructor 1
    	luas= (alas*tinggi)/2;
    cout << "constructor 2 muncul" << endl;
	}
	
	prismasegitiga(float alas){ // contructor 1
    	keliling= 3*alas;
     cout << "constructor 3 muncul" << endl;
	}
    
    volumeprisma(float alas, float tinggi, float rusuk){ // contructor 1
		volume=(alas*tinggi*rusuk) / 2;
     cout << "constructor 4 muncul" << endl;
	}
	
	~prismasegitiga(){
        cout<<"destructor prisma telah dihapus"<<endl; // destructor
    }
	
    void tampilluas() {
      cout << "Luas segitiga adalah = " << luas << endl;
    }

    void tampilkeliling() {
      cout << "Keliling segitiga adalah = " << keliling << endl;
    }
    
    void tampilvolume() {
      cout << "Volume segitiga adalah = " << volume << endl;
    }
};

int main() {

	prismasegitiga prismasegitiga1;

	prismasegitiga1.volumeprisma(8,12,10); // penambahan data alas, tinggi, rusuk
	prismasegitiga1.tampilvolume();

	prismasegitiga prismasegitiga2(8,12); // penambahan data alas, tinggi
	prismasegitiga2.tampilluas();
	  
	prismasegitiga prismasegitiga3(8); // penambahan alas
	prismasegitiga3.tampilkeliling();

  return 0;
}
