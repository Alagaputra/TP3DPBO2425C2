import java.util.ArrayList;

public class TokoBangunan extends Toko {
    private ArrayList<ListBarang> barangList = new ArrayList<>();

    public TokoBangunan(String NIB, String pemilik, String lokasi,
                        String namaToko, double penghasilan, String jamOperasional) {
        super(NIB, pemilik, lokasi, namaToko, penghasilan, jamOperasional);
    }

    public TokoBangunan() {
        super();
    }

    public void tambahBarang(ListBarang barang) {
        barangList.add(barang);
    }

    public void tampilkanTabel() {
        if (getNIB().isEmpty() && getNamaToko().isEmpty() && getNamaPemilik().isEmpty() && getLokasi().isEmpty()
            && barangList.isEmpty() && getPenghasilan() == 0 && getJamOperasional().isEmpty()) {
            System.out.println("Belum ada data toko yang dimasukkan\n");
            return;
        }

        System.out.println("============================================================");
        System.out.println("Toko: " + getNamaToko());
        System.out.println("NIB: " + getNIB());
        System.out.println("Pemilik: " + getNamaPemilik() + " | Lokasi: " + getLokasi());
        System.out.println("Penghasilan: " + getPenghasilan() + " | Jam Operasional: " + getJamOperasional());
        System.out.println("============================================================");
        System.out.printf("%-5s %-20s %10s%n", "ID", "Nama Barang", "Harga");
        System.out.println("----------------------------------------");

        if (barangList.isEmpty()) {
            System.out.println("(Belum ada barang)");
        } else {
            for (ListBarang b : barangList) {
                System.out.printf("%-5d %-20s %10.2f%n", b.getId(), b.getNamaBarang(), b.getHarga());
            }
        }
        System.out.println();
    }
}
