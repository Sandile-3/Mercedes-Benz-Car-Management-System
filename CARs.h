//
// Created by sandi on 11/06/2025.
//

#ifndef MERCEDES_CAR_STORAGE_CARS_H
#define MERCEDES_CAR_STORAGE_CARS_H
#include<string>
#include<iostream>

class CARs {
protected:
    std:: string Model;
    std:: string Colour;
    int kms;

public:
    CARs(std:: string Model, std:: string Colour, int kms)
    :Model(Model) , Colour(Colour) , kms(kms){}

    virtual void displayCar() const
    {
        std::cout  << "Model: " << Model
                   << " | Colour: " << Colour
                   << " | KMs: "<< kms << std::endl;
    }

    std:: string getModel()const{ return Model;}
    std:: string getColour()const{ return Colour;}
    int getKms()const{return kms;}

    std::string toText()const{
        return Model + " , " + Colour + " , " + std::to_string(kms) + " KMs" ;
    }


};


#endif //MERCEDES_CAR_STORAGE_CARS_H
