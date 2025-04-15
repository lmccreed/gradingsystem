#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include "examgradecalculator.h";
class Subject{
protected:
    std::vector <double> assignment ={};
    std::vector <double> tests={};
    std::vector <double> quizzes={};
    bool assignment_done=false;
    bool test_done=false;
    bool quiz_done=false;
    char done;
    char donept2;
    double value;
    double avg_assign;
    double avg_test;
    double avg_quiz;
    double final_grade;
    double assignment_weight;
    double test_weight;
    double quiz_weight;
    ExamgradeCalculator exam;
public:
    Subject ();
    void collect_grades ();
    virtual void calc()=0;
    void display ();
};

#endif //SUBJECT_H
