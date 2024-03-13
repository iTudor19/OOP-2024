#include<iostream>
#include"Math.h"
using namespace std;
int main()
{
    cout << Math::Add(1, 2) << endl;
    cout << Math::Add(1, 2, 3) << endl;
    cout << Math::Add(12312312, 124124124) << endl;
    cout << Math::Add(1213123, 123123123, 1231231) << endl;
    cout << Math::Mul(1, 2) << endl;
    cout << Math::Mul(1, 2, 3) << endl;
    cout << Math::Mul(1231231, 123123) << endl;
    cout << Math::Mul(123123, 123, 21312) << endl;
    cout << Math::Add(1, 2, 3, 4, 5, 6) << endl;
    cout << Math::Add("ana", "aremere");
}