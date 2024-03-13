#define _CRT_SECURE_NO_WARNINGS // pentru a dezactiva avertismentul C4996

#include "Math.h"
#include <stdarg.h>
#include <string.h>

int Math::Add(int a, int b)
{
    return a + b;
}
int Math::Add(int a, int b, int c)
{
    return a + b + c;
}
int Math::Add(double a, double b)
{
    return a + b;
}
int Math::Add(double a, double b, double c)
{
    return a + b + c;
}
int Math::Mul(int a, int b)
{
    return a * b;
}
int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}
int Math::Mul(double a, double b)
{
    return a * b;
}
int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}
int Math::Add(int count, ...)
{
    int a = 0;
    va_list n;
    va_start(n, count);
    for (int i = 0; i < count; i++)
        a += va_arg(n, int);
    va_end(n);
    return a;
}
char* Math::Add(const char* a, const char* b)
{
    char* s = new char[strlen(a) + strlen(b) + 1];
    strcpy(s, a);
    strcat(s, b);
    return s;
}
