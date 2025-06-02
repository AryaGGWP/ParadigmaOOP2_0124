#include <iostream>
using namespace std;

class seseorang{
    public:
        // virtual void pesan() = 0;
        virtual void pesan()
        {
            cout << "Pesan dari seseorang" << endl;
        }
};

class joko: public seseorang{
    public:
        void pesan()
        {
            cout << "Pesan dari Joko" << endl;
        }
};

class lia : public seseorang{
    public:
        void pesan()
        {
            cout << "Pesan dari Lia" << endl;
        }
};

int main()
{
    seseorang *obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan(); // Output: Pesan dari Joko

    obyek = &b;
    obyek->pesan(); // Output: Pesan dari Lia

    return 0;
}

class AbstraksiKlas {
private:
    string x, y;
    
    public:
    // method untuk mengisi nilai
    // private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    // menampilkan nilai
    void display() {
        cout << "Nilai x: " << x << endl;
        cout << "Nilai y: " << y << endl;
    }
};

int main() {
    AbstraksiKlas ak;
    
    // mengisi nilai private member
    ak.setXY("Yogyakarta", "Kampus");
    
    // menampilkan nilai
    ak.display();
    
    return 0;
}

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

int main()
{
    remoteLampu lampuRumah;
    
    // Mengisi saklar dengan nilai
    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");
    
    // Menampilkan nilai saklar
    cout << "Saklar 0: " << lampuRumah.getSaklarNo(0) << endl;
    cout << "Saklar 1: " << lampuRumah.getSaklarNo(1) << endl;
    cout << "Saklar 2: " << lampuRumah.getSaklarNo(2) << endl;
    cout << "Saklar 3: " << lampuRumah.getSaklarNo(3) << endl;

    return 0;
}

class baseClass
{
    public:
        virtual void perkenalan() final
        {
            cout << "Halo saya adalah Function dari Base Class" << endl;
        }
};

class derivedClass : public baseClass 
{
    public:
        void perkenalan()
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