# LP4DPBO2024C1
*Saya Arya Aydin Margono NIM 2203484 mengerjakan
Latihan Praktikum 1 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*

## Desain Program
![Class diagram](/desain/LP4DPBO.png)
Terdapat 4 class, yaitu Vehicle, Car, Motorcycle, dan ParkingLot. Dalam desain yang saya buat, saya menyatukan class Garage dan ParkingLot yang ada dalam spesifikasi soal menjadi hanya ParkingLot saja. Tetapi, atribut dari Garage tetap ada pada class ParkingLot. Menurut saya, kedua class tersebut mirip dan memiliki tujuan yang sama, yaitu untuk menyimpan kendaraan.

Salah satu atribut dari ParkingLot, yaitu Jumlah kendaraan saat ini tidak memiliki setter karena valuenya bergantung pada atribut lain, yaitu Daftar kendaraan sehingga value Jumlah kendaraan saat ini didapat dari menghitung Daftar kendaraan.

### Relasi antar class
Class Car dan Motorcycle memiliki hubungan inheritance (is a) dengan class Vehicle karena Car dan Motorcycle merupakan Vehicle (kendaraan). Sedangkan untuk ParkingLot dan Vehicle memiliki hubungan composition (has a) karena ParkingLot dapat diisi dengan Vehicle.

## Alur Program
1. Program dimulai dengan menginstansiasi object-object Vehicle (Car dan Motorcycle) dan memasukkannya ke dalam sebuah list bertipe Vehicle.
2. Instansiasi 2 object ParkingLot dan menjadikan list Vehicle sebagai salah satu argument
3. Output semua data yang ada
4. Mensimulasikan method addListVehicle() yang ada pada class ParkingLot dengan menambah sebuah object Vehicle baru
5. Output kembali data yang sudah update

## Dokumentasi
### Python
![Python](/py/Screenshots/py1.png)
![Python](/py/Screenshots/py2.png)
![Python](/py/Screenshots/py3.png)
### C++
![C++](/cpp/Screenshots/cpp1.png)
![C++](/cpp/Screenshots/cpp2.png)
![C++](/cpp/Screenshots/cpp3.png)
