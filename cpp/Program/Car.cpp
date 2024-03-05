#pragma once
#include <bits/stdc++.h>
#include "Vehicle.cpp"

class Car : public Vehicle{
    private:
        int jmlKursi;
        int jmlPintu;
    
    public:
        Car(){
            
        }

        Car(int jmlKursi, int jmlPintu, string plat, string merk, int tahunProduksi, string warna, string pemilik) : Vehicle(plat, merk, tahunProduksi, warna, pemilik){
            this->jmlKursi = jmlKursi;
            this->jmlPintu = jmlPintu;            
        }

        void setJmlKursi(int jmlKursi){
            this->jmlKursi = jmlKursi;
        }

        int getJmlKursi(){
            return this->jmlKursi;
        }

        void setJmlPintu(int jmlPintu){
            this->jmlPintu = jmlPintu;
        }

        int getJmlPintu(){
            return this->jmlPintu;
        }

        ~Car(){
            
        }
};