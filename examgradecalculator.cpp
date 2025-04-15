#include "examgradecalculator.h"
#include <iostream>
using namespace std;
ExamgradeCalculator::ExamgradeCalculator() {
     goal=0;
     current=0;
     weight=0;
     required=0;
}
void ExamgradeCalculator::displayquestions() {
    cout << "What is your current grade in the class?\n";
    cin >> current;
    cout << "What is your goal grade in the class?\n";
    cin >> goal;
    cout << "What is your final exam weight in the class?\n";
    cin >> weight;
    weight=weight/100;
}
double ExamgradeCalculator:: calcrequiredgrade() {
    required=(goal-(current*(1-(weight))))/(weight);
    return required;
}
void ExamgradeCalculator::displayrequiredgrade() {
    cout << "The required exam grade in the class to get your goal grade is " << calcrequiredgrade() <<"%" <<  endl;
}