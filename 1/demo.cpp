unsigned int Fib1(unsigned int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}
