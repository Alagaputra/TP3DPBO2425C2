class Perusahaan:
    def __init__(self, NIB: str = "", namaPemilik: str = "", lokasi: str = ""):
        self.NIB = NIB
        self.namaPemilik = namaPemilik
        self.lokasi = lokasi

    # Getter
    def getNIB(self): return self.NIB
    def getNamaPemilik(self): return self.namaPemilik
    def getLokasi(self): return self.lokasi

    # Setter
    def setNIB(self, NIB): self.NIB = NIB
    def setNamaPemilik(self, nama): self.namaPemilik = nama
    def setLokasi(self, lokasi): self.lokasi = lokasi
