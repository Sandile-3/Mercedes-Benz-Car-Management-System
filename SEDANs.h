//
// Created by sandi on 10/06/2025.
//

#ifndef MERCEDES_CAR_STORAGE_SEDANS_H
#define MERCEDES_CAR_STORAGE_SEDANS_H
#include<string>
#include "CARs.h"

class SEDANs : public CARs {
public:
    SEDANs(std:: string Model, std:: string Colour, int kms)
    : CARs(Model,Colour, kms){}

};


#endif //MERCEDES_CAR_STORAGE_SEDANS_H
