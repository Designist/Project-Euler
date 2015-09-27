// Problem 2
//
// Statement: Each new term in the Fibonacci sequence is generated by adding the previous two terms.
//            By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
//            By considering the terms in the Fibonacci sequence whose values do not exceed four million,
//            find the sum of the even-valued terms.
//
// Source: https://projecteuler.net/problem=2

#include <iostream>

int main()
{
    int sum = 0;
    int x, y = 1;
    while (x < 4000000 and y < 4000000)
    {
        x += y;
        if (x > 4000000)
        {
            break;
        }
        y += x;
        if (x % 2 == 0)
        {
            sum += x;
        }
        if (y % 2 == 0)
        {
            sum += y;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}

// Solution : 4613732