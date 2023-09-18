#include <iostream>
#include <string>
using namespace std;

class Apple
{
	int i;

public:
	Apple()
	{
		i = 0;
		cout << "inside constructor\n";
	}
	~Apple()
	{
		cout << "inside destructor\n";
	}
};

int main()
{
	int x = 0;
	if (x == 0)
	{
		Apple obj
	}
	return 0;
}