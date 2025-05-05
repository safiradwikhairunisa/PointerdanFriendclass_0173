#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No induk = " << nim << endl;
    }
};

int nim(){

    mahasiswa mhs; //objek mhs
    mhs.nim = 5;
    mhs.showNim(); //member akses 
}