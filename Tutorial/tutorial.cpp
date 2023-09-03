#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " number" << endl;
        return 1;
    }
    const double inputValue = atof(argv[1]);

    const double outputValue = sqrt(inputValue);
    cout << "The square root of " << inputValue << " is " << outputValue << endl;
    return 0;
}