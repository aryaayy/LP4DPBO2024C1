#pragma once
#include <bits/stdc++.h>
#include "Vehicle.cpp"

class Motorcycle : public Vehicle{
    private:
        string jenis;
        int tangki;
    
    public:
        Motorcycle(){
            
        }

        Motorcycle(string jenis, int tangki, string plat, string merk, int tahunProduksi, string warna, string pemilik) : Vehicle(plat, merk, tahunProduksi, warna, pemilik){
            this->jenis = jenis;
            this->tangki = tangki;
        }

        void setJenis(string jenis){
            this->jenis = jenis;
        }

        string getJenis(){
            return this->jenis;
        }

        void setTangki(int tangki){
            this->tangki = tangki;
        }

        int getTangki(){
            return this->tangki;
        }

        ~Motorcycle(){
            
        }
};