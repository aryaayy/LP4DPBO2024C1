#include <bits/stdc++.h>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"

#define nl '\n'
#define sp ' '

using namespace std;

int main(){
    Motorcycle motorArya = Motorcycle("Skuter", 5.5, "B3804EBG", "Honda", 2013, "Merah", "Arya");
    Motorcycle motorRakha = Motorcycle("Bebek", 3.0, "B3241BCA", "Yamaha", 2009, "Hitam", "Rakha");
    Motorcycle motorRafie = Motorcycle("Moge", 7.0, "X6574DDD", "Ninja", 2015, "Hijau", "Rafie");

    Car mobilTattha = Car(4, 4, "D1234ABC", "Mitsubishi", 2019, "Putih", "Tattha");
    Car mobilJason = Car(2, 2, "D5632GCC", "Volvo", 1995, "Kuning", "Jason");

    vector<Vehicle*> listKendaraan1{&motorArya, &motorRakha, &mobilTattha};
    vector<Vehicle*> listKendaraan2{&mobilJason, &motorRafie};

    ParkingLot parkiranUPI = ParkingLot("Parkiran UPI", 30, listKendaraan1, 500);
    ParkingLot parkiranITB = ParkingLot("Parkiran ITB", 25.5, listKendaraan2, 300);

    vector<ParkingLot> listParkiran{parkiranUPI, parkiranITB};
    int i = 1;
    for(auto parkiran : listParkiran){
        cout << "Parkiran ke-" << i << nl;
        cout << "Data " << parkiran.getNama() << nl;
        cout << "Luas parkiran                : " << parkiran.getLuas() << " m^2" << nl;
        cout << "Jumlah kendaraan terparkir   : " << parkiran.getJmlVehicle() << " kendaraan" << nl;
        cout << "Kapasitas total              : " << parkiran.getKapasitas() << " kendaraan" << nl;
        cout << "List kendaraan yang terparkir:" << nl << nl;
        int j = 1;
        for(auto vehicle : parkiran.getListVehicle()){
            cout << "    Kendaraan ke-" << j << nl;
            cout << "    Nama pemilik    : " << vehicle->getPemilik() << nl;
            cout << "    Jenis kendaraan : ";

            Car* car = dynamic_cast<Car*>(vehicle);
            if(car){
                cout << "Mobil" << nl;
                cout << "    Jumlah kursi    : " << vehicle->getJmlKursi() << nl;
                cout << "    Jumlah pintu    : " << vehicle->getJmlPintu() << nl;
            }
            else{
                cout << "Sepeda motor" << nl;
                cout << "    Jenis motor     : " << vehicle->getJenis() << nl;
                cout << "    Kapasitas tangki: " << vehicle->getTangki() << " liter" << nl;
            }
            
            cout << "    Nomor plat      : " << vehicle->getPlat() << nl;
            cout << "    Merk            : " << vehicle->getMerk() << nl;
            cout << "    Tahun produksi  : " << vehicle->getTahunProduksi() << nl;
            cout << "    Warna           : " << vehicle->getWarna() << nl << nl;
            j++;
        }
        i++;
    }

    cout << "SEORANG MAHASISWA UPI BERNAMA RAVEN BARU DATANG KE KAMPUS!" << nl << nl;
    Motorcycle motorRaven = Motorcycle("MotoGP", 15, "D7584DGG", "Suzuki", 2024, "Beige", "Raven");
    parkiranUPI.addListVehicle(&motorRaven);

    cout << "Data " << parkiranUPI.getNama() << nl;
    cout << "Luas parkiran                : " << parkiranUPI.getLuas() << " m^2" << nl;
    cout << "Jumlah kendaraan terparkir   : " << parkiranUPI.getJmlVehicle() << " kendaraan" << nl;
    cout << "Kapasitas total              : " << parkiranUPI.getKapasitas() << " kendaraan" << nl;
    cout << "List kendaraan yang terparkir:" << nl << nl;
    int j = 1;
    for(auto vehicle : parkiranUPI.getListVehicle()){
        cout << "    Kendaraan ke-" << j << nl;
        cout << "    Nama pemilik    : " << vehicle->getPemilik() << nl;
        cout << "    Jenis kendaraan : ";

        Car* car = dynamic_cast<Car*>(vehicle);
        if(car){
            cout << "Mobil" << nl;
            cout << "    Jumlah kursi    : " << vehicle->getJmlKursi() << nl;
            cout << "    Jumlah pintu    : " << vehicle->getJmlPintu() << nl;
        }
        else{
            cout << "Sepeda motor" << nl;
            cout << "    Jenis motor     : " << vehicle->getJenis() << nl;
            cout << "    Kapasitas tangki: " << vehicle->getTangki() << " liter" << nl;
        }
        
        cout << "    Nomor plat      : " << vehicle->getPlat() << nl;
        cout << "    Merk            : " << vehicle->getMerk() << nl;
        cout << "    Tahun produksi  : " << vehicle->getTahunProduksi() << nl;
        cout << "    Warna           : " << vehicle->getWarna() << nl << nl;
        j++;
    }

    return 0;
}