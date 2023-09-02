#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    int weight;
    Dog operator+(const Dog &d)
    {
        Dog dog;
        dog.weight = this->weight + d.weight;
        return dog;
    }
};
int main()
{
    Dog dog1, dog2, dog3;
    dog1.weight = 10;
    dog2.weight = 12;
    dog3 = dog1 + dog2;
    cout << dog3.weight << endl;
    return 0;
}