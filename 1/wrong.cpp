#include<iostream>
template <class t>
t mm (t,t );
template <class  p>
p sum ( p, p ,p);
int main()
{
    int a=3,b=5,c=1000,d;
    d=sum(a,b,c);
    std::cout << d;
	std::cin.get();
    return 0;
}
template <class t>
t mm(t x,t y)
{
    t r=0;
    for(t m=1;m*x<y;m++)
    {
        r+=m*x ;
    }
    return r;
}
template <class p>
p sum ( p m, p n ,p z)
{
    p i;
    i =mm(m,z)+mm(n,z);
    return i;
}

