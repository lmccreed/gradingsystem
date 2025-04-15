#include "science.h"
#include "subject.cpp"
#include <iostream>
science :: science() {
        assignment_weight=0.2;
        test_weight=0.4;
        quiz_weight=0.2;
        labs_weight = 0.2;
        avg_labs= 0;
}
void science ::collect_sciencegrades () {
        collect_grades ();
        std::cout<< "Do you have lab grades? (y/n): ";
        std::cin>> done;
        if (done=='y') {
                while (labs_done==false) {
                        std:: cout<< "Enter lab grade: ";
                        std:: cin>> value;
                        labs.push_back(value);
                        std:: cout<< "Enter another lab?(y/n): ";
                        std::cin>> donept2;
                        if (donept2=='n') {
                                labs_done=true;
                        }
                }
        }
        else { cout <<"No lab grade- calculation failed";}
}
void science::calc() {
        //assignment calc
        for (int i= assignment.size(); i>=0; i--){
                avg_assign += assignment[i];
        }
        avg_assign= avg_assign/ assignment.size();
        //used for testing if code works:
        //cout << avg_assign<< endl;

        //test calc
        for (int i= tests.size(); i>=0; i--){
                avg_test += tests [i];
        }
        avg_test= avg_test/ tests.size();
        //used for testing if code works:
        //cout << avg_test<< endl;

        //quiz calc
        for (int i= quizzes.size(); i>=0; i--){
                avg_quiz += quizzes [i];
        }
        avg_quiz= avg_quiz/ quizzes.size();
        //used for testing if code works:
        //cout << avg_quiz<< endl;

        //lab calc
        for (int i= labs.size(); i>=0; i--){
                avg_labs += labs [i];
        }
        avg_labs= avg_labs/ labs.size();
        //used for testing if code works:
        //cout << avg_labs<< endl;

        //final grade calc
        final_grade= ((assignment_weight*avg_assign) + (test_weight*avg_test)+(quiz_weight*avg_quiz)+(labs_weight*avg_labs));
        std::cout<< "Your final grade is " << final_grade << "%" << std::endl << std::endl;

}
void science ::displayscience () {
        Subject:: display ();
}