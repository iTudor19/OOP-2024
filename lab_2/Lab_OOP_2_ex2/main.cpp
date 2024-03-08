#include <iostream>
#include "Student.h"
#include "Global.h"

int main() {
    Student student1;
    student1.setName(std::string("Ana"));
    student1.setMathGrade(9.5);
    student1.setEnglishGrade(8.0);
    student1.setHistoryGrade(7.5);

    Student student2;
    student2.setName(std::string("Bogdan"));
    student2.setMathGrade(8.0);
    student2.setEnglishGrade(8.0);
    student2.setHistoryGrade(9.0);

    std::cout << "Student 1 average grade: " << student1.getAverageGrade() << std::endl;
    std::cout << "Student 2 average grade: " << student2.getAverageGrade() << std::endl;

    std::cout << "Comparison by name: " << compareByName(student1, student2) << std::endl;
    std::cout << "Comparison by Math: " << compareByMath(student1, student2) << std::endl;
    std::cout << "Comparison by English: " << compareByEnglish(student1, student2) << std::endl;
    std::cout << "Comparison by History: " << compareByHistory(student1, student2) << std::endl;
    std::cout << "Comparison by average: " << compareByAverage(student1, student2) << std::endl;

    return 0;
}
