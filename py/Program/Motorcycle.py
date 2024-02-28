from Vehicle import Vehicle

class Motorcycle(Vehicle):
    __jenis = ""
    __tangki = 0

    def __init__(self, jenis = "", tangki = 0, plat="", merk="", tahunProduksi=0, warna="", pemilik=""):
        super().__init__(plat, merk, tahunProduksi, warna, pemilik)
        self.__jenis = jenis
        self.__tangki = tangki
    
    def setJenis(self, jenis):
        self.__jenis = jenis
    
    def getJenis(self):
        return self.__jenis
    
    def setTangki(self, tangki):
        self.__tangki = tangki
    
    def getTangki(self):
        return self.__tangki