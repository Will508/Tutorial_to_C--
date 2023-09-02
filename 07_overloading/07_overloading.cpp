#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string name;
    void getWeight(int weight)
    {
        cout << name << "的体重为：" << weight << "kg" << endl;
    }
    void getWeight(double weight)
    {
        cout << name << "的体重为：" << weight << "kg" << endl;
    }
};
int main()
{
    Dog dog;
    dog.name = "Horge";
    dog.getWeight(10);
    dog.getWeight(10.5);
    return 0;
}