#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	const int *ptr;
	int val;
	ptr = &val;
	cout << *ptr << " " << ptr << endl;
	return 0;
}
