#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        string color;
        int weight;
};

class Dog : public Animal{
    public:
        string name;
        int age;
        void run();
};

int main(){
    Dog dog;
    dog.name = "Jorge";
    dog.age = 1;
    dog.color = "blue";
    dog.weight = 60;
    cout << "dog's name is " << dog.name << endl;
}