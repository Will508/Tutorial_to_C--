#include <iostream>
#include <string>
using namespace std;
class Dog
{
public:
    string name;
    Dog(int i = 0)
    {
        total = i;
    }
    void addFood(int number)
    {
        total += number;
    }
    int getFood()
    {
        return total;
    }

private:
    int total;
};

int main()
{
    Dog dog;
    dog.name = "Shit";
    dog.addFood(3);
    dog.addFood(2);
    cout << dog.name << " totally gets " << dog.getFood() << " food" << endl;
    return 0;
}