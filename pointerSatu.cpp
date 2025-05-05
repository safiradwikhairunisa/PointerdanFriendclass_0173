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

    Mahasiswa mhs; //objek mhs
    mhs.nim = 5;
    mhs.showNim(); //member akses 

    Mahasiswa &refMhs = mhs; //pointer reference
    refMhs.nim = 2; //member akses
    mhs.showNim();

    Mahasiswa *pMhs = &mhs; //pointer dereference
    pMhs->nim = 3; //arrow operator
    pMhs->showNim();
    return 0;
}