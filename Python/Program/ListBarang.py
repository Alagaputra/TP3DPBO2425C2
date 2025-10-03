class ListBarang:
    def __init__(self, id: int = 0, namaBarang: str = "", harga: float = 0.0):
        self.id = id
        self.namaBarang = namaBarang
        self.harga = harga

    # Getter
    def getId(self): return self.id
    def getNamaBarang(self): return self.namaBarang
    def getHarga(self): return self.harga

    # Setter
    def setId(self, id): self.id = id
    def setNamaBarang(self, nama): self.namaBarang = nama
    def setHarga(self, harga): self.harga = harga
