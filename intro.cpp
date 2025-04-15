#include "intro.h"
#include <iostream>
#include "science.h"
using namespace std;

intro::intro() {
    subjectnumber=0;
    whichclass();
}
void intro::whichclass() {
    std::cout << "Hello, welcome to grade calculator!!\n";
    std::cout<< " 1.Science\n 2.Math\n 3.History\nChoose a subject by entering its number:";
    cin>>  subjectnumber;
    if (subjectnumber == 1) {
        scienceintro();
    }
    else if (subjectnumber == 2) {
        mathintro();
    }
    else if (subjectnumber == 3) {
        histintro();
    }
}

void intro::scienceintro() {
    std::cout << "\nYou have chosen the science grade calculator.\nBegin enterting any science grades you have in percent format without symbol(ex.if you have a 90% enter 90):\n\n";
    science scienceobject;
    science* myclass=&scienceobject;
    myclass->collect_sciencegrades();
    myclass->calc();
    myclass->displayscience();
}
void intro::mathintro(){}
void intro::histintro(){}
