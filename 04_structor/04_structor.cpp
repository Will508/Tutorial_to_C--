#include <iostream>
#include <string>
using namespace std;

class Dog
{
    public:
    Dog();
    ~Dog();
};

int main()
{
    Dog dog;
    cout << "构造函数和析构函数实例" << endl;
    return 0;
}

Dog::Dog(){
    cout << "构造函数执行" << endl;
}
Dog::~Dog(){
    cout << "析构函数执行" << endl;
}