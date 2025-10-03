from Perusahaan import Perusahaan

class Toko(Perusahaan):
    def __init__(self, NIB="", pemilik="", lokasi="", namaToko="", penghasilan=0.0, jamOperasional=""):
        super().__init__(NIB, pemilik, lokasi)
        self.namaToko = namaToko
        self.penghasilan = penghasilan
        self.jamOperasional = jamOperasional

    # Getter
    def getNamaToko(self): return self.namaToko
    def getPenghasilan(self): return self.penghasilan
    def getJamOperasional(self): return self.jamOperasional

    # Setter
    def setNamaToko(self, nama): self.namaToko = nama
    def setPenghasilan(self, penghasilan): self.penghasilan = penghasilan
    def setJamOperasional(self, jam): self.jamOperasional = jam

    def tampilkanTabel(self):
        print("Toko umum:", self.namaToko)
