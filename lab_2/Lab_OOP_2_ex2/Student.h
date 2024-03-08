#pragma once
#include<iostream>
using namespace std;

class Student {

    string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:

    void setName(const string& name);
    std::string getName();

    void setMathGrade(float grade);
    float getMathGrade();

    void setEnglishGrade(float grade);
    float getEnglishGrade();

    void setHistoryGrade(float grade);
    float getHistoryGrade();

    float getAverageGrade();
};
