#include<iostream>
using namespace std;
unsigned int Fib(unsigned int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}
int a;
int main()
{
    std::cin>>a ;
    a=Fib(a);
    std::cout << a ;
    return 0;
}
