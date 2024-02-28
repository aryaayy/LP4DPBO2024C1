from Vehicle import Vehicle

class Car(Vehicle):
    __jmlKursi = 0
    __jmlPintu = 0

    def __init__(self, jmlKursi = 0, jmlPintu = 0, plat="", merk="", tahunProduksi=0, warna="", pemilik=""):
        super().__init__(plat, merk, tahunProduksi, warna, pemilik)
        self.__jmlKursi = jmlKursi
        self.__jmlPintu = jmlPintu
    
    def setJmlKursi(self, jmlKursi):
        self.__jmlKursi = jmlKursi
    
    def getJmlKursi(self):
        return self.__jmlKursi
    
    def setJmlPintu(self, jmlPintu):
        self.__jmlPintu = jmlPintu
    
    def getJmlPintu(self):
        return self.__jmlPintu