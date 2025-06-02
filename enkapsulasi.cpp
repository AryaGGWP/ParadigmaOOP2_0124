#include <iostream>
using namespace std;

class remoteLampu
{
    private:
        string saklarNo[10];

    public:
        // Method untuk mengisi saklar
        void setSaklarNo(int i, string value)
        {
           saklarNo[i] = value;
        }
        string getSaklarNo(int i)
        {
            return saklarNo[i];
        }

};