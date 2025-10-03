#pragma once
#include <string>
#include <iostream>
using namespace std;

class ListBarang {
private:
    int id;
    string namaBarang;
    double harga;

public:
    ListBarang(): id(0), namaBarang(""), harga(0) {}
    ListBarang(int id, const string& nama, double harga)
        : id(id), namaBarang(nama), harga(harga) {}

    // Getter
    int getId() const { return id; }
    string getNamaBarang() const { return namaBarang; }
    double getHarga() const { return harga; }

    // Setter
    void setId(int v) { id = v; }
    void setNamaBarang(const string& s) { namaBarang = s; }
    void setHarga(double v) { harga = v; }
};
