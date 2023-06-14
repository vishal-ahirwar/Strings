// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include"string.hpp"
int main()
{
	V::String str("Hello world, ");
	V::String str1("Hello Universe!");
	V::String str2 = "Hello Galaxy!";
	V::String str3=str + str1;
	printf("%s : %s\n", str3(),true?"heap Allocated":"stack allocated!");
	printf("words : %u", str3.count_words());
};


