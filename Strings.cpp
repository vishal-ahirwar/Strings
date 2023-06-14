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
	printf("words : %ud", str3.count_words());
	printf("%s : %s\n", str3(),str.b_is_heap_allocated()?"heap Allocated":"stack allocated!");
};


