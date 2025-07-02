
// Created by sandi on 10/06/2025.
//

#ifndef MERCEDES_CAR_STORAGE_SUVS_H
#define MERCEDES_CAR_STORAGE_SUVS_H
#include<string>
#include<iostream>
#include "CARs.h"

//class inheriting objects from the parent class
class SUVs: public CARs{
public:
    SUVs(std:: string Model, std:: string Colour, int kms)// new constructor inheriting from the CARs constructor
    :CARs(Model,Colour,kms){}

};



#endif //MERCEDES_CAR_STORAGE_SUVS_H
