from Car import Car
from Motorcycle import Motorcycle
from ParkingLot import ParkingLot

motorArya = Motorcycle("Skuter", 5.5, "B3804EBG", "Honda", 2013, "Merah", "Arya")
motorRakha = Motorcycle("Bebek", 3.0, "B3241BCA", "Yamaha", 2009, "Hitam", "Rakha")
motorRafie = Motorcycle("Moge", 7.0, "X6574DDD", "Ninja", 2015, "Hijau", "Rafie")

mobilTattha = Car(4, 4, "D1234ABC", "Mitsubishi", 2019, "Putih", "Tattha")
mobilJason = Car(2, 2, "D5632GCC", "Volvo", 1995, "Kuning", "Jason")

listKendaraan1 = [motorArya, motorRakha, mobilTattha]
listKendaraan2 = [mobilJason, motorRafie]

parkiranUPI = ParkingLot("Parkiran UPI", 30, listKendaraan1, 500)
parkiranITB = ParkingLot("Parkiran ITB", 25.5, listKendaraan2, 300)

listParkiran = [parkiranUPI, parkiranITB]

i = 1
for parkiran in listParkiran:
    print(f'Parkiran ke-{i}')
    print(f'Data {parkiran.getNama()}')
    print(f'Luas parkiran                : {parkiran.getLuas()} m^2')
    print(f'Jumlah kendaraan terparkir   : {parkiran.getJmlVehicle()} kendaraan')
    print(f'Kapasitas total              : {parkiran.getKapasitas()} kendaraan')
    print(f'List kendaraan yang terparkir:', end='\n\n')
    j = 1
    for vehicle in parkiran.getListVehicle():
        print(f'    Kendaraan ke-{j}')
        print(f'    Nama pemilik    : {vehicle.getPemilik()}')
        print(f'    Jenis kendaraan : ', end='')
        if isinstance(vehicle, Car):
            print("Mobil")
            print(f'    Jumlah kursi    : {vehicle.getJmlKursi()}')
            print(f'    Jumlah pintu    : {vehicle.getJmlPintu()}')
        else:
            print("Sepeda motor")
            print(f'    Jenis motor     : {vehicle.getJenis()}')
            print(f'    Kapasitas tangki: {vehicle.getTangki()} liter')
        print(f'    Nomor plat      : {vehicle.getPlat()}')
        print(f'    Merk            : {vehicle.getMerk()}')
        print(f'    Tahun Produksi  : {vehicle.getTahunProduksi()}')
        print(f'    Warna           : {vehicle.getWarna()}', end='\n\n')
        j += 1
    i += 1

print('SEORANG MAHASISWA UPI BERNAMA RAVEN BARU DATANG KE KAMPUS!', end='\n\n')
motorRaven = Motorcycle("MotoGP", 15, "D7584DGG", "Suzuki", 2024, "Beige", "Raven")
parkiranUPI.addListVehicle(motorRaven)

print(f'Data {listParkiran[0].getNama()}')
print(f'Luas parkiran                : {parkiran.getLuas()} m^2')
print(f'Jumlah kendaraan terparkir   : {listParkiran[0].getJmlVehicle()} kendaraan')
print(f'Kapasitas total              : {listParkiran[0].getKapasitas()} kendaraan')
print(f'List kendaraan yang terparkir:', end='\n\n')
j = 1
for vehicle in listParkiran[0].getListVehicle():
    print(f'    Kendaraan ke-{j}')
    print(f'    Nama pemilik    : {vehicle.getPemilik()}')
    print(f'    Jenis kendaraan : ', end='')
    if isinstance(vehicle, Car):
        print("Mobil")
        print(f'    Jumlah kursi    : {vehicle.getJmlKursi()}')
        print(f'    Jumlah pintu    : {vehicle.getJmlPintu()}')
    else:
        print("Sepeda motor")
        print(f'    Jenis motor     : {vehicle.getJenis()}')
        print(f'    Kapasitas tangki: {vehicle.getTangki()} liter')
    print(f'    Nomor plat      : {vehicle.getPlat()}')
    print(f'    Merk            : {vehicle.getMerk()}')
    print(f'    Tahun Produksi  : {vehicle.getTahunProduksi()}')
    print(f'    Warna           : {vehicle.getWarna()}', end='\n\n')
    j += 1