#include "Numberlist.h"
#include <iostream>

void NumberList::Init()
{
    this->count = 0;
}

bool NumberList::Add(int x)
{
    if (count <= 10)
    {
        numbers[count] = x;
        count++;
    }
    else
        return false;
}
void NumberList::Sort()
{
    int i, j, aux;
    for (i = 0; i < count - 1; i++)
        for (j = i + 1; j <= count - 1; j++)
            if (numbers[i] > numbers[j])
            {
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
}

void NumberList::Print()
{
    int i;
    for (i = 0; i < count; i++)
        std::cout << numbers[i] << " ";
}