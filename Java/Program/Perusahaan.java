public class Perusahaan {
    private String NIB;
    private String namaPemilik;
    private String lokasi;

    public Perusahaan(String NIB, String namaPemilik, String lokasi) {
        this.NIB = NIB;
        this.namaPemilik = namaPemilik;
        this.lokasi = lokasi;
    }

    public Perusahaan() {
        this("", "", "");
    }

    public String getNIB() { return NIB; }
    public void setNIB(String NIB) { this.NIB = NIB; }

    public String getNamaPemilik() { return namaPemilik; }
    public void setNamaPemilik(String namaPemilik) { this.namaPemilik = namaPemilik; }

    public String getLokasi() { return lokasi; }
    public void setLokasi(String lokasi) { this.lokasi = lokasi; }
}
