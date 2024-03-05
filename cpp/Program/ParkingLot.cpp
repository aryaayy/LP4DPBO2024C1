#pragma once
#include <bits/stdc++.h>
#include "Vehicle.cpp"

using namespace std;

class ParkingLot{
    private:
        string nama;
        int luas;
        vector<Vehicle*> listVehicle;
        int kapasitas;
        int jmlVehicle;

    public:
        ParkingLot(){
            
        }

        ParkingLot(string nama, int luas, vector<Vehicle*> listVehicle, int kapasitas){
            this->nama = nama;
            this->luas = luas;
            this->listVehicle = listVehicle;
            this->kapasitas = kapasitas;
            this->jmlVehicle = listVehicle.size();
        }

        void setNama(string nama){
            this->nama = nama;
        }

        string getNama(){
            return this->nama;
        }

        void setLuas(int luas){
            this->luas = luas;
        }

        int getLuas(){
            return this->luas;
        }

        void addListVehicle(Vehicle* vehicle){
            this->listVehicle.push_back(vehicle);
            this->jmlVehicle++;
        }

        void setListVehicle(vector<Vehicle*> listVehicle){
            this->listVehicle = listVehicle;
            this->jmlVehicle = listVehicle.size();
        }

        vector<Vehicle*> getListVehicle(){
            return this->listVehicle;
        }

        void setKapasitas(int kapasitas){
            this->kapasitas = kapasitas;
        }

        int getKapasitas(){
            return this->kapasitas;
        }

        int getJmlVehicle(){
            return this->jmlVehicle;
        }

        ~ParkingLot(){
            
        }
};