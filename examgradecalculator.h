
#ifndef EXAMGRADECALCULATOR_H
#define EXAMGRADECALCULATOR_H

class ExamgradeCalculator {
    private:
    double goal;
    double current;
    double weight;
public:
    ExamgradeCalculator();
    double required;
    void displayquestions();
    double calcrequiredgrade();
    void displayrequiredgrade();
};


#endif //EXAMGRADECALCULATOR_H
