#include "Canvas.h"
#include <iostream>

int main() {
    Canvas canvas(20, 10);

    canvas.DrawCircle(10, 5, 4, '+');//
    //canvas.FillCircle(10, 5, 4, '+');//
    //canvas.DrawRect(1, 1, 9, 5, '#');//
    //canvas.FillRect(1, 1, 9, 5, '#');//
    //canvas.SetPoint(3, 8, '@');//
    //canvas.DrawLine(1, 1, 15, 8, '~');//

    canvas.Print();

    return 0;
}
