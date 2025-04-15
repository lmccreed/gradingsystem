
#ifndef SCIENCE_H
#define SCIENCE_H
#include "Subject.h"
class science: public Subject{
    std::vector <double> labs={};
    bool labs_done=false;
    double avg_labs;
    double labs_weight;
public:
    void collect_sciencegrades ();
    virtual void calc ();
    void displayscience ();
    science();
};
#endif //SCIENCE_H
