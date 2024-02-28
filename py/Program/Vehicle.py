class Vehicle:
    __plat = ""
    __merk = ""
    __tahunProduksi = 0
    __warna = ""
    __pemilik = ""

    def __init__(self, plat = "", merk = "", tahunProduksi = 0, warna = "", pemilik=""):
        self.__plat = plat
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna
        self.__pemilik = pemilik

    def setPlat(self, plat):
        self.__plat = plat
    
    def getPlat(self):
        return self.__plat
    
    def setMerk(self, merk):
        self.__merk = merk
    
    def getMerk(self):
        return self.__merk

    def setTahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi
    
    def getTahunProduksi(self):
        return self.__tahunProduksi

    def setWarna(self, warna):
        self.__warna = warna
    
    def getWarna(self):
        return self.__warna
    
    def setPemilik(self, pemilik):
        self.__pemilik = pemilik

    def getPemilik(self):
        return self.__pemilik