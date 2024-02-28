class ParkingLot:
    __nama = ""
    __luas = 0
    __listVehicle = []
    __kapasitas = 0
    __jmlVehicle = 0

    def __init__(self, nama = "", luas = 0, listVehicle = [], kapasitas = 0):
        self.__nama = nama
        self.__luas = luas
        self.__listVehicle = listVehicle
        self.__kapasitas = kapasitas
        self.__jmlVehicle = len(listVehicle)

    def setNama(self, nama):
        self.__nama = nama
    
    def getNama(self):
        return self.__nama
    
    def setLuas(self, luas):
        self.__luas = luas
    
    def getLuas(self):
        return self.__luas
    
    def addListVehicle(self, listVehicle):
        self.__listVehicle.append(listVehicle)
        self.__jmlVehicle += 1

    def setListVehicle(self, listVehicle):
        self.__listVehicle = listVehicle
        self.__jmlVehicle = len(listVehicle)
    
    def getListVehicle(self):
        return self.__listVehicle
    
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas
    
    def getKapasitas(self):
        return self.__kapasitas
    
    def getJmlVehicle(self):
        return self.__jmlVehicle