#ifndef MACRO_STRING
#define MACRO_STRING
#include<stdlib.h>
namespace V
{

class String
{
public:
	String(const char* str){
		while (str[length] != '\0')++length;
		this->data = new char[length+1];
		for (int i = 0; i <= length; ++i)data[i] = str[i];
	};
	~String() {if(data) delete [] data; };
	const char* operator()(){ return this->data; };
	//TODO Validate String
	//TODO Reverse String
	//TODO Comparing String
	//TODO Checking Palindrome
	//TODO Duplicates in String

	const char* operator+(const String& rhs)
	{
		
		auto total_len{ this->length + rhs.length };
		char* new_char = new char[total_len];
		int i = 0;
		for (; i < this->length; ++i)new_char[i] = this->data[i];
		for (int j = 0; j <= rhs.length; ++i, ++j)new_char[i] = rhs.data[j];
		return new_char;
	};

public:
	auto get_length()const { return this->length; };

	auto count_words() {
		int words{1};
	for (int i = 0; i < length; ++i)
	{
		if (data[i] == ' ')
		{
			++words;
		}
	}
	return words;
	};
private:

	unsigned int length{};
	char* data{ nullptr };
};
}
#endif // !MACRO_STRING

