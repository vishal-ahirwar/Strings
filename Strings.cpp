// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include"string.hpp"
int main()
{
	V::String str("Hello world");
	const char* ptr = str();
	printf("%s\n", ptr);
};


