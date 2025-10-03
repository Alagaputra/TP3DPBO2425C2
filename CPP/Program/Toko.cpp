#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "Perusahaan.cpp"
using namespace std;

class Toko : public Perusahaan {
private:
    string namaToko;
    double penghasilan;
    string jamOperasional;

public:
    Toko() : Perusahaan(), namaToko(""), penghasilan(0), jamOperasional("") {}
    Toko(const string& nib, const string& pemilik, const string& lokasi,
         const string& nama, double uang, const string& jam)
        : Perusahaan(nib, pemilik, lokasi), namaToko(nama), penghasilan(uang), jamOperasional(jam) {}

    // Getter
    string getNamaToko() const { return namaToko; }
    double getPenghasilan() const { return penghasilan; }
    string getJamOperasional() const { return jamOperasional; }

    // Setter
    void setNamaToko(const string& n) { namaToko = n; }
    void setPenghasilan(double p) { penghasilan = p; }
    void setJamOperasional(const string& j) { jamOperasional = j; }

    // virtual (supaya subclass override tampilkanTabel)
    virtual void tampilkanTabel() {
        cout << "Toko umum: " << namaToko << "\n";
    }

protected:
    // helper menampilkan header info toko (dipakai subclass)
    void printHeaderInfo() const {
        cout << string(60, '=') << "\n";
        cout << "Toko: " << getNamaToko() << "\n";
        cout << "NIB: " << getNIB() << "\n";
        cout << "Pemilik: " << getNamaPemilik() << " | Lokasi: " << getLokasi() << "\n";
        cout << "Penghasilan: " << fixed << setprecision(2) << getPenghasilan()
             << " | Jam Operasional: " << getJamOperasional() << "\n";
        cout << string(60, '=') << "\n";
    }
};
