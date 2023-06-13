#ifndef MACRO_STRING
#define MACRO_STRING
namespace V
{

class String
{
public:
	String(const char* str) :data((char*)str) {};
	~String() { if (data)delete[]data; };
	const char* operator()(){ return this->data; };
private:
	unsigned long int length{};
	char* data{ nullptr };
};
}
#endif // !MACRO_STRING

