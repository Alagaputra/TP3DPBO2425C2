#include "TokoElektronik.cpp"
#include "TokoBangunan.cpp"

int main() {
    // 1. Kosong total
    TokoElektronik kosong;
    kosong.tampilkanTabel();

    //2. Data toko + barang dummy
    TokoElektronik tokoElek("NIB123", "Budi", "Jakarta", "Toko Elektronik Budi", 50000000, "08.00 - 20.00");
    tokoElek.tambahBarang(ListBarang(1, "Televisi", 3500000));
    tokoElek.tambahBarang(ListBarang(2, "Kulkas", 4200000));
    tokoElek.tambahBarang(ListBarang(3, "Laptop", 9500000));
    tokoElek.tambahBarang(ListBarang(4, "Headphone", 750000));
    tokoElek.tampilkanTabel();

    // 3. Contoh toko bangunan
    TokoBangunan tokoBang("NIB456", "Andi", "Bandung", "Toko Bangunan Andi", 30000000, "07.00 - 17.00");
    tokoBang.tambahBarang(ListBarang(1, "Semen", 50000));
    tokoBang.tambahBarang(ListBarang(2, "Batu Bata", 1200));
    tokoBang.tambahBarang(ListBarang(3, "Cat Tembok", 85000));
    tokoBang.tambahBarang(ListBarang(4, "Paku 1 Kg", 20000));
    tokoBang.tampilkanTabel();

    return 0;
}
