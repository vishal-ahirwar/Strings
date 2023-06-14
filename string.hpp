#ifndef MACRO_STRING
#define MACRO_STRING
#include<stdlib.h>
namespace V
{

class String
{
public:
	String(const char* str) :data((char*)str), b_allocated(0) {
		
		while (data[length] != '\0')++length;
	};
	~String() {if(b_allocated) delete [] data; };
	const char* operator()(){ return this->data; };
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
	auto b_is_heap_allocated()const { return this->b_allocated; };
	int count_words() {
	for (int i = 0; i < length; ++i)
	{
		if (data[i] == ' ' && data[i - 1]==' ')
		{
			++words;
		}
	}
	return words;
	};
private:
	unsigned long int words{};
	bool b_allocated;
	unsigned int length{};
	char* data{ nullptr };
};
}
#endif // !MACRO_STRING

