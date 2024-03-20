#include "Sort.h"
#include <iostream>

using namespace std;

int main()
{
   // Pb 1
    Sort a(25, 25, 125);
    a.Print();

   // Pb 2
    Sort b;
    b.QuickSort(true);
    b.Print();

    cout << endl << "numarul de elemente este " << b.GetElementsCount() << endl;
    cout << endl << "Elementul 3 este " << b.GetElementFromIndex(3) << endl;

   // Pb 3
    int v[10] = { 1 , 2 , 3 , 9 , 8 , 7 , 6 , 5 , 4 , 0 };
    Sort c(v, 10);
    c.Print();

    // Pb 4
    Sort d(10, 1,2,10,9,8,7,6,5,4,0);
    d.QuickSort(false);
    d.Print();

    //Pb5

   char f[] = "1,2,10,9,8,7,6,5,4,0";
    Sort e(f);
    e.BubbleSort(false);
    e.Print();

    return 0;
}