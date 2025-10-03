#pragma once
#include <string>
#include <iostream>
using namespace std;

class Perusahaan {
private:
    string NIB;
    string namaPemilik;
    string lokasi;

public:
    Perusahaan(const string& nib = "", const string& pemilik = "", const string& lokasi = "")
        : NIB(nib), namaPemilik(pemilik), lokasi(lokasi) {}

    // Getter
    string getNIB() const { return NIB; }
    string getNamaPemilik() const { return namaPemilik; }
    string getLokasi() const { return lokasi; }

    // Setter
    void setNIB(const string& nib) { NIB = nib; }
    void setNamaPemilik(const string& nama) { namaPemilik = nama; }
    void setLokasi(const string& lok) { lokasi = lok; }
};
