#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include "Toko.cpp"
#include "ListBarang.cpp"
using namespace std;

class TokoElektronik : public Toko {
private:
    vector<ListBarang> barangList; // composition ada di subclass

public:
    TokoElektronik() : Toko() {}
    TokoElektronik(const string& nib, const string& pemilik, const string& lokasi,
                   const string& nama, double uang, const string& jam)
        : Toko(nib, pemilik, lokasi, nama, uang, jam) {}

    // tambah / akses barang
    void tambahBarang(const ListBarang& b) { barangList.push_back(b); }

    // tampilkan tabel
    void tampilkanTabel() override {
        // benar-benar kosong total
        if (getNIB().empty() && getNamaPemilik().empty() && getLokasi().empty()
            && getNamaToko().empty() && getPenghasilan() == 0 && getJamOperasional().empty()
            && barangList.empty()) 
        {
            cout << "============================================\n";
            cout << "      Belum ada data toko yang dimasukkan   \n";
            cout << "============================================\n\n";
            return;
        }

        printHeaderInfo();

        string h1 = "ID", h2 = "Nama Barang", h3 = "Harga (Rp)";
        size_t col1 = h1.size(), col2 = h2.size(), col3 = h3.size();

        for (const auto& b : barangList) {
            col1 = max(col1, to_string(b.getId()).size());
            col2 = max(col2, b.getNamaBarang().size());
            ostringstream oss; oss << fixed << setprecision(2) << b.getHarga();
            col3 = max(col3, oss.str().size());
        }

        string border = "+" + string(col1 + 2, '-') + "+" + string(col2 + 2, '-') + "+" + string(col3 + 2, '-') + "+";
        cout << border << "\n";
        cout << "| " << left << setw(col1) << h1
             << " | " << left << setw(col2) << h2
             << " | " << right << setw(col3) << h3 << " |\n";
        cout << border << "\n";

        if (!barangList.empty()) {
            for (const auto& b : barangList) {
                ostringstream oss; oss << fixed << setprecision(2) << b.getHarga();
                cout << "| " << left << setw(col1) << b.getId()
                     << " | " << left << setw(col2) << b.getNamaBarang()
                     << " | " << right << setw(col3) << oss.str() << " |\n";
            }
        }

        cout << border << "\n\n";
    }
};
