#include <iostream>
using namespace std;

class baseClass
{
    public:
        virtual void perkenalan() final
        {
            cout << "Halo saya adalah Function dari Base Class";
        }
};

class derivedClass : public baseClass
{
    public:
        void perkenalan() // This will cause a compile-time error because perkenalan is final in baseClass
        {
            cout << "Halo saya adalah Function dari Derived Class" << endl;
        }
};

int main() 
{
    derivedClass a;
    a.perkenalan(); // Output: Halo saya adalah Function dari Derived Class

    return 0;
}