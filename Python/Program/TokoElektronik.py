from Toko import Toko
from ListBarang import ListBarang

class TokoElektronik(Toko):
    def __init__(self, NIB="", pemilik="", lokasi="", namaToko="", penghasilan=0.0, jamOperasional=""):
        super().__init__(NIB, pemilik, lokasi, namaToko, penghasilan, jamOperasional)
        self.barangList = []

    def tambahBarang(self, barang: ListBarang):
        self.barangList.append(barang)

    def tampilkanTabel(self):
        if not self.barangList and self.getNIB() == "" and self.getNamaToko() == "":
            print("Belum ada data toko yang dimasukkan\n")
            return

        print("============================================================")
        print("Toko:", self.getNamaToko())
        print("NIB:", self.getNIB())
        print("Pemilik:", self.getNamaPemilik(), "| Lokasi:", self.getLokasi())
        print("Penghasilan:", self.getPenghasilan(), "| Jam Operasional:", self.getJamOperasional())
        print("============================================================")
        print(f"{'ID':<5} {'Nama Barang':<20} {'Harga':>10}")
        print("-" * 40)
        for b in self.barangList:
            print(f"{b.getId():<5} {b.getNamaBarang():<20} {b.getHarga():>10.2f}")
        print()
