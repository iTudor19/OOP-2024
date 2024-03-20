#pragma once

class Sort

{

private:

    int n = 10;
    int* vector;

public:

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

    Sort(int nr, int min_el, int max_el);

    Sort(int* vector, int nr_el);

    Sort(int count, ...);

    Sort(char* string);

    Sort();


};