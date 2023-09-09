#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	int val = 42;
	int *p = &val;
	cout << p << endl;
	cout << *p << endl;
	cout << *&(*p) << endl;
	return 0;
}
