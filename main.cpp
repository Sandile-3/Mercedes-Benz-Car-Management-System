#include <iostream>
#include<string>
#include<vector>
#include<fstream>
#include "CARs.h"
#include "SUVs.h"
#include "SEDANs.h"
#include "Hatchbacks.h"
#include "Coupes.h"

std:: vector<SUVs>suv;
std:: vector<SEDANs>sedan;
std:: vector<Hatchbacks>hatchback;
std:: vector<Coupes>coupe;

void addSuv(std:: vector<SUVs> &suv){
    std::string Model, Colour;
    int kms;

    std:: cout<< "Enter the Suv model: ";
    std::getline(std::cin>> std:: ws, Model);

    std::cout<< "Enter the colour: ";
    std::getline(std::cin>> std:: ws, Colour);

    std::cout<< "Enter the KMs of the car: ";
    std::cin>> kms;

    SUVs newSUV(Model, Colour,kms);
    suv.push_back(newSUV);

    std::cout<< "SUV added successfully! ";
}

void addSedan(std:: vector<SEDANs> &sedan){
    std::string Model, Colour;
    int kms;

    std:: cout<< "Enter the Sedan model: ";
    std::getline(std::cin>> std:: ws, Model);

    std::cout<< "Enter the colour: ";
    std::getline(std::cin>> std:: ws, Colour);

    std::cout<< "Enter the KMs of the car: ";
    std::cin>> kms;

    SEDANs newSedan(Model, Colour,kms);
    sedan.push_back(newSedan);

    std::cout<< "Sedan added successfully! ";
}

void addHatchback(std::vector<Hatchbacks> &hatchback){
    std::string Model, Colour;
    int kms;

    std:: cout<< "Enter the Hatchback model: ";
    std::getline(std::cin>> std:: ws, Model);

    std::cout<< "Enter the colour: ";
    std::getline(std::cin>> std:: ws, Colour);

    std::cout<< "Enter the KMs of the car: ";
    std::cin>> kms;

    Hatchbacks newHatchback(Model, Colour,kms);
    hatchback.push_back(newHatchback);

    std::cout<< "Hatchback added successfully! ";
}

void addCoupe(std:: vector<Coupes> & coupe){
    std::string Model, Colour;
    int kms;

    std:: cout<< "Enter the Coupe model: ";
    std::getline(std::cin>> std:: ws, Model);

    std::cout<< "Enter the colour: ";
    std::getline(std::cin>> std:: ws, Colour);

    std::cout<< "Enter the KMs of the car: ";
    std::cin>> kms;

    Coupes newCoupe(Model, Colour,kms);
    coupe.push_back(newCoupe);

    std::cout<< "Coupe added successfully! ";
}

void saveToFile(const std::vector<SUVs> &suv, const std::vector<SEDANs> &sedan,
                    const std::vector<Hatchbacks> &hatchback,
                    const std::vector<Coupes> &coupe) {
    std::ofstream file("MercedesBenz-Cars.txt");

    if(!file){
        std::cerr<< "Error Opening File!";
        return;
    }

    std::cout<< "---SUV(s)---\n";
    for(const auto &car :suv)
        file<<car.toText();

    std::cout<< "---Sedan(s)---\n";
    for(const auto &car :sedan)
        file<< car.toText();

    std::cout<< "---Hatchback(s)---\n";
    for(const auto &car :hatchback)
        file<< car.toText();

    std::cout<< "---Coupe(s)---\n";
    for(const auto &car :coupe)
        file<< car.toText();

    file.close();
    std::cout<< "Cars saved to MercedesBenz-Cars.txt\n";
}

int main() {
    int choice;

    void saveToFile(const std::vector<SUVs> &suv, const std::vector<SEDANs> &sedan,
                    const std::vector<Hatchbacks> &hatchback,
                    const std::vector<Coupes> &coupe);

    do{
        std:: cout<< "\n Welcome to the Mercedes Benz Car storage system \n";
        std::cout << "1. Add SUV\n";
        std::cout<<  "2. Add Sedan\n";
        std::cout<<  "3. Add Hatchback\n";
        std::cout<<  "4. Add Coupe\n";
        std::cout<<  "5. View all cars\n";
        std::cout<<  "6. Save cars to a file\n";
        std::cout<<  "0. Exit\n";
        std::cout<<  "Choice: ";
        std::cin>> choice;

        switch(choice){

            case 1:
                addSuv(suv);break;
            case 2:
                addSedan(sedan);break;
            case 3:
                addHatchback(hatchback);break;
            case 4:
                addCoupe(coupe);break;
            case 5:
                std::cout<<"\n--- SUV(s) ---\n";
                for(const auto &CARs: suv) CARs.displayCar();

                std::cout<<"\n--- Sedan(s) ---\n";
                for(const auto &CARs: sedan) CARs.displayCar();

                std::cout<<"\n--- Hatchback(s) ---\n";
                for(const auto &CARs: hatchback) CARs.displayCar();

                std::cout<<"\n--- Coupe(s) ---\n";
                for(const auto &CARs: coupe) CARs.displayCar();
                break;
            case 6:
                saveToFile(suv, sedan,hatchback,coupe);break;
            case 0:
                std::cout<< "\n Exiting...";break;
            default: std::cout<< " Invalid Option! \n";break;
        }
    } while(choice!=0);
    return 0;
}
