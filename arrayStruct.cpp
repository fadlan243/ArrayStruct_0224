#include <iostream>
#include <string>
using namespace std;

// struct alamat
struct detailAlamat 
{
    string desa;
    string kota;
};

// struct orang
struct orang 
{
    string nama;
    detailAlamat alamat;
    int umur;
};
