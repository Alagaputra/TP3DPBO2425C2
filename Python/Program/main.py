from TokoElektronik import TokoElektronik
from TokoBangunan import TokoBangunan
from ListBarang import ListBarang

if __name__ == "__main__":
   

    # 1. Toko kosong total
    tokoKosongE = TokoElektronik()
    tokoKosongE.tampilkanTabel()

    # 2. Toko ada tapi barang kosong
    tokoE = TokoElektronik("NIB123", "Budi", "Jakarta", "Toko Elektronik Budi", 50000000, "08.00 - 20.00")
    tokoE.tambahBarang(ListBarang(1, "Televisi", 3500000))
    tokoE.tambahBarang(ListBarang(2, "Laptop", 9500000))
    tokoE.tambahBarang(ListBarang(3, "Kulkas", 4200000))
    tokoE.tampilkanTabel()


    # 1. Toko kosong total
    tokoKosongB = TokoBangunan()
    tokoKosongB.tampilkanTabel()

    # 2. Toko ada tapi barang kosong
    tokoB = TokoBangunan("NIB456", "Andi", "Bandung", "Toko Bangunan Andi", 25000000, "07.00 - 18.00")
    tokoB.tambahBarang(ListBarang(1, "Semen", 75000))
    tokoB.tambahBarang(ListBarang(2, "Batu Bata", 500))
    tokoB.tambahBarang(ListBarang(3, "Cat Tembok", 120000))
    tokoB.tampilkanTabel()
