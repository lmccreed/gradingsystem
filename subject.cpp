#include <iostream>
#include "Subject.h"
using namespace std;

Subject:: Subject () {
    assignment_weight=0.3;
    test_weight=0.4;
    quiz_weight=0.3;
     done= '\0';
     donept2= '\0';
     value= 1;
    avg_assign= 0;
     avg_test=0;
     avg_quiz= 0;
     final_grade= 0;
}

void Subject:: collect_grades () {
    //assignment stuff
    std::cout<< "Do you have assignment grades? (y/n): ";
    std::cin>> done;
    if (done=='y') {
        while (assignment_done==false) {
            std:: cout<< "Enter assignment grade: ";
            std:: cin>> value;
            assignment.push_back(value);
            std:: cout<< "Enter another assignment?(y/n): ";
            std::cin>> donept2;
            if (donept2=='n') {
                assignment_done=true;
            }
        }
    }
    //test stuff
    std::cout<< "Do you have test grades? (y/n): ";
    std::cin>> done;
    if (done=='y') {
        while (test_done==false) {
            std:: cout<< "Enter test score: ";
            std:: cin>> value;
            tests.push_back(value);
            std:: cout<< "Enter another test?(y/n): ";
            std:: cin>> donept2;
            if (donept2=='n') {
                test_done=true;
            }
        }
    }

    // quiz stuff
        std::cout<< "Do you have quiz grades? (y/n): ";
        std::cin>> done;
        if (done=='y') {
            while (quiz_done==false) {
                std:: cout<< "Enter quiz grade: ";
                std:: cin>> value;
                quizzes.push_back(value);
                std:: cout<< "Enter another quiz?(y/n): ";
                std:: cin>> donept2;
                if (donept2=='n') {
                    quiz_done=true;
                }
            }
        }
    }

void Subject:: display () {
    cout << "Do you want to calculate what you need to get on your final exam?(y/n)\n";
    cin >> done;
    if (done =='y') {
    exam.displayquestions();
    exam.calcrequiredgrade();
    exam.displayrequiredgrade();
    }
    else {
        cout <<"Okay, have a good day!\n";
    }
}
