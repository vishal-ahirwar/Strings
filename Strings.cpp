// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main()
{
    for (int i = 32; i < 256; ++i)printf("%c%c", i, i % 10 ==0? '\n' : ' ' );
}

