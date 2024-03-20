#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <iostream>
#include <stdarg.h>
#include <string.h>

using namespace std;

void Sort::Print()
{
    cout << "\n";
    for (int i = 0; i < this->n; i++)
        cout << this->vector[i] << " ";
    cout << "\n";
}

// Pb 1
Sort::Sort(int nr, int min1, int max1)
{
    this->vector = (int*)(malloc(this->n * sizeof(int)));
    time_t t;
    srand((unsigned)time(&t));
    for (int i = 0; i < nr; i++)
        this->vector[i] = min1 + rand() % (min1 - max1 + 1);
}
// Pb 2
Sort::Sort() : vector(new int[8]{ 2, 1, 3, 5, 4, 8, 7, 6 })
{
}
// Pb 3
Sort::Sort(int* vector, int nr_el)
{
    this->vector = (int*)(malloc(this->n * sizeof(int)));
    for (int i = 0; i < this->n; i++)
        this->vector[i] = vector[i];
}
//Pb 4

Sort::Sort(int count, ...)
{
    this->n = count;
    this->vector = new int[count];

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i)
    {
        this->vector[i] = va_arg(args, int);
    }

    va_end(args);
}

// Pb 5
Sort::Sort(char* string)
{
    int i = 0;
    char* p;
    this->vector = (int*)(malloc(this->n * sizeof(int)));
    p = strtok(string, ",");
    while (p != 0)
    {
        int nr = 0;
        for (int j = 0; j < strlen(p); j++)
            nr = nr * 10 + p[j] - 48;
        this->vector[i++] = nr;
        p = strtok(0, ",");
    }
}

void Sort::BubbleSort(bool ascendent)
{
    if (ascendent == true)
    {
        for (int i = 0; i < this->n; i++)
            for (int j = 0; j < this->n - i - 1; j++)
                if (this->vector[j] > this->vector[j + 1])
                    swap(this->vector[j], this->vector[j + 1]);
    }
    else
    {
        for (int i = 0; i < this->n; i++)
            for (int j = 0; j < this->n - i - 1; j++)
                if (this->vector[j] < this->vector[j + 1])
                    swap(this->vector[j], this->vector[j + 1]);
    }
}

int partition1(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int partition2(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] > pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void Quick1(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition1(arr, low, high);
        Quick1(arr, low, pi - 1);
        Quick1(arr, pi + 1, high);
    }
}

void Quick2(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition2(arr, low, high);
        Quick2(arr, low, pi - 1);
        Quick2(arr, pi + 1, high);
    }
}

void Sort::QuickSort(bool ascendent)
{
    if (ascendent == true)
        Quick1(this->vector, 0, this->n - 1);
    else
        Quick2(this->vector, 0, this->n - 1);
}

int Sort::GetElementsCount()
{
    return this->n;
}

int Sort::GetElementFromIndex(int index)
{
    return this->vector[index - 1];
}