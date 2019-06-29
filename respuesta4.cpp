#include <iostream>
#include "console.h"
#include <string>



void asteriscos(int n, string &algo)
{
    if(n < 1)
    {
        throw 255;
    }
    else if (n % 2 != 0)
    {
        algo = "*";
    }
    else
    {
        algo = "**";
    }
}

void zigzag(int n, string &vaina)
{
    if(n == 1)
    {
        
    }
}
