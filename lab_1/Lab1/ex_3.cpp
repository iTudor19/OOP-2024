/*/nclude <iostream>
using namespace std;

bool isPrime(int n)
{

    for (int tr = 2; tr <= n / 2; tr++)
        if ((n % tr) == 0)
            return false;
    return true;
}

int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    if (isPrime(n))
        std::cout << n << " is prime !";
    else
        std::cout << n << " is NOT prime !";
    return 0;
}
/*Putem observa ca si daca completam cu valori folositoare spatiile libere, programul tot va afisa cazul de numar prim si pentru cand n este 1*/