#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width, int height)
{
    setwidth = width;
    setheight = height;
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    for (int i = y - ray; i <= y + ray; i++)
    {
        for (int j = x - ray; j <= x + ray; j++)
        {
            if ((j - x) * (j - x) + (i - y) * (i - y) <= ray * ray)
            {
                if ((j - x) * (j - x) + (i - y) * (i - y) >= (ray - 1) * (ray - 1))
                {
                    if (i >= 0 && i < setheight && j >= 0 && j < setwidth)
                    {
                        a[i][j] = ch;
                    }
                }
            }
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    for (int i = y - ray; i <= y + ray; i++)
    {
        for (int j = x - ray; j <= x + ray; j++)
        {
            if ((j - x) * (j - x) + (i - y) * (i - y) <= ray * ray)
            {
                if (i >= 0 && i < setheight && j >= 0 && j < setwidth)
                {
                    a[i][j] = ch;
                }
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = left; i <= right; i++)
    {
        for (int j = top; j <= bottom; j++)
        {
            if (i == left || i == right || j == top || j == bottom)
            {
                if (i >= 0 && i < setheight && j >= 0 && j < setwidth)
                {
                    a[i][j] = ch;
                }
            }
        }
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = left; i <= right; i++)
    {
        for (int j = top; j <= bottom; j++)
        {
            if (i >= 0 && i < setheight && j >= 0 && j < setwidth)
            {
                a[i][j] = ch;
            }
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch)
{
    if (x >= 0 && x < setheight && y >= 0 && y < setwidth)
    {
        a[x][y] = ch;
    }
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    if (x1 < 0 || x1 >= setwidth || y1 < 0 || y1 >= setheight || x2 < 0 || x2 >= setwidth || y2 < 0 || y2 >= setheight)
        return;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x1;
    int y = y1;
    int d = 2 * dy - dx;
    int dE = 2 * dy;
    int dNE = 2 * (dy - dx);
    SetPoint(x, y, ch);
    while (x < x2) {
        if (d < 0) {
            x++;
            d += dE;
        }
        else {
            x++;
            y++;
            d += dNE;
        }
        SetPoint(x, y, ch);
    }
}


void Canvas::Print()
{
    for (int i = 0; i < setheight; i++)
    {
        for (int j = 0; j < setwidth; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Canvas::Clear()
{
    for (int i = 0; i < setheight; i++)
    {
        for (int j = 0; j < setwidth; j++)
        {
            a[i][j] = ' ';
        }
    }
}