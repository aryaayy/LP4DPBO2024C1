#pragma once
#include <bits/stdc++.h>

using namespace std;

class Vehicle{
    private:
        string plat;
        string merk;
        int tahunProduksi;
        string warna;
        string pemilik;
    
    public:
        Vehicle(){
          
        }

        Vehicle(string plat, string merk, int tahunProduksi, string warna, string pemilik){
            this->plat = plat;
            this->merk = merk;
            this->tahunProduksi = tahunProduksi;
            this->warna = warna;
            this->pemilik = pemilik;
        }

        void setPlat(string plat){
            this->plat = plat;
        }

        string getPlat(){
            return this->plat;
        }

        void setMerk(string merk){
            this->merk = merk;
        }

        string getMerk(){
            return this->merk;
        }

        void setTahunProduksi(int tahunProduksi){
            this->tahunProduksi = tahunProduksi;
        }

        int getTahunProduksi(){
            return this->tahunProduksi;
        }

        void setWarna(string warna){
            this->warna = warna;
        }

        string getWarna(){
            return this->warna;
        }

        void setPemilik(string pemilik){
            this->pemilik = pemilik;
        }

        string getPemilik(){
            return this->pemilik;
        }

        virtual int getJmlKursi(){
            return -1;
        }

        virtual int getJmlPintu(){
            return -1;
        }

        virtual string getJenis(){
            return "";
        }

        virtual int getTangki(){
            return -1;
        }

        ~Vehicle(){

        }
};