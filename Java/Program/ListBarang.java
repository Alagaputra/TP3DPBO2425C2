public class ListBarang {
    private int id;
    private String namaBarang;
    private double harga;

    public ListBarang(int id, String namaBarang, double harga) {
        this.id = id;
        this.namaBarang = namaBarang;
        this.harga = harga;
    }

    public int getId() { return id; }
    public void setId(int id) { this.id = id; }

    public String getNamaBarang() { return namaBarang; }
    public void setNamaBarang(String namaBarang) { this.namaBarang = namaBarang; }

    public double getHarga() { return harga; }
    public void setHarga(double harga) { this.harga = harga; }
}
