#include "NumberList.h"
int main()
{
    NumberList n;
    n.Init();
    n.Add(5);
    n.Add(2);
    n.Add(1);
    n.Add(7);
    n.Sort();
    n.Print();
    return 0;
}