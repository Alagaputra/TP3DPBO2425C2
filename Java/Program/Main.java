public class Main {
    public static void main(String[] args) {
        
        // 1. Toko kosong total
        TokoElektronik tokoKosongE = new TokoElektronik();
        tokoKosongE.tampilkanTabel();

        // 2. Toko ada tapi barang kosong
        TokoElektronik tokoE = new TokoElektronik("NIB123", "Budi", "Jakarta",
                "Toko Elektronik Budi", 50000000, "08.00 - 20.00");
        tokoE.tambahBarang(new ListBarang(1, "Televisi", 3500000));
        tokoE.tambahBarang(new ListBarang(2, "Laptop", 9500000));
        tokoE.tambahBarang(new ListBarang(3, "Kulkas", 4200000));
        tokoE.tampilkanTabel();

      
        // 1. Toko kosong total
        TokoBangunan tokoKosongB = new TokoBangunan();
        tokoKosongB.tampilkanTabel();

        // 2. Toko ada tapi barang kosong
        TokoBangunan tokoB = new TokoBangunan("NIB456", "Andi", "Bandung",
                "Toko Bangunan Andi", 25000000, "07.00 - 18.00");
        tokoB.tambahBarang(new ListBarang(1, "Semen", 75000));
        tokoB.tambahBarang(new ListBarang(2, "Batu Bata", 500));
        tokoB.tambahBarang(new ListBarang(3, "Cat Tembok", 120000));
        tokoB.tampilkanTabel();
    }
}
