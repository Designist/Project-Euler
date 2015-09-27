// Problem 1
//
// Statement: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//            The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
//
// Source: https://projecteuler.net/problem=1

#include <iostream>

int main1()
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 or i % 5 == 0)
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}

// Solution : 233168