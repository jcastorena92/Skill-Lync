#include <iostream>
using namespace std;

class complex {
    int i;
    int j;
public:
    complex() {}

    complex(int a, int b) {
        i = a;
        j = b;
    }

    complex operator+(complex c) {
        complex temp;
        temp.i = this->i + c.i;
        temp.j = this->j + c.j;
        return temp;
    }

    void show() {
        cout << "Complex Number: " << i << " + " << j << "i" << endl;
    }
};

int main() {
    complex c1(2, 3);
    complex c2(4, 5);

    complex sum = c1 + c2;

    cout << "Sum of two complex numbers: ";
    sum.show();

    return 0;
}

