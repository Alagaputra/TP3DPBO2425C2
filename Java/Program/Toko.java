public class Toko extends Perusahaan {
    private String namaToko;
    private double penghasilan;
    private String jamOperasional;

    public Toko(String NIB, String namaPemilik, String lokasi,
                String namaToko, double penghasilan, String jamOperasional) {
        super(NIB, namaPemilik, lokasi);
        this.namaToko = namaToko;
        this.penghasilan = penghasilan;
        this.jamOperasional = jamOperasional;
    }

    public Toko() {
        this("", "", "", "", 0.0, "");
    }

    public String getNamaToko() { return namaToko; }
    public void setNamaToko(String namaToko) { this.namaToko = namaToko; }

    public double getPenghasilan() { return penghasilan; }
    public void setPenghasilan(double penghasilan) { this.penghasilan = penghasilan; }

    public String getJamOperasional() { return jamOperasional; }
    public void setJamOperasional(String jamOperasional) { this.jamOperasional = jamOperasional; }
}
