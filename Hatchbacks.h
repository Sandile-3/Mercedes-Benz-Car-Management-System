//
// Created by sandi on 10/06/2025.
//

#ifndef MERCEDES_CAR_STORAGE_HATCHBACKS_H
#define MERCEDES_CAR_STORAGE_HATCHBACKS_H

#include<string>
#include "CARs.h"

class Hatchbacks: public CARs {
public:
    Hatchbacks(std:: string Model, std:: string Colour, int kms)
    : CARs(Model, Colour, kms){}

};


#endif //MERCEDES_CAR_STORAGE_HATCHBACKS_H
