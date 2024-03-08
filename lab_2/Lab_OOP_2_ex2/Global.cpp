#include "Global.h"
#include "Student.h"
#include <iostream>
#include <string>

int compareByName(Student& s1, Student& s2) {
    return s1.getName().compare(s2.getName());
}

int compareByEnglish(Student& s1, Student& s2) {
    if (s1.getEnglishGrade() > s2.getEnglishGrade())
        return 1;
    else  if (s1.getEnglishGrade() < s2.getEnglishGrade())
        return -1;
    else 
        return 0;
}

int compareByMath(Student& s1, Student& s2) {
    if (s1.getMathGrade() > s2.getMathGrade())
        return 1;
    else  if (s1.getMathGrade() < s2.getMathGrade())
        return -1;
    else
        return 0;
}

int compareByHistory(Student& s1, Student& s2) {
    if (s1.getHistoryGrade() > s2.getHistoryGrade())
        return 1;
    else  if (s1.getHistoryGrade() < s2.getHistoryGrade())
        return -1;
    else
        return 0;
}

int compareByAverage(Student& s1, Student& s2) {
    if (s1.getAverageGrade() > s2.getAverageGrade()) {
        return 1;
    }
    else if (s1.getAverageGrade() < s2.getAverageGrade()) {
        return -1;
    }
    else {
        return 0;
    }
}
