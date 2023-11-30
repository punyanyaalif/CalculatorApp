#include <iostream>

using namespace std;

class temp{
    public :
        int a, b, c;
        char op;

        void GetValue1();
        void GetValue2();
        void GetOp();
        void Add();
        void Sub();
        void Multi();
        void Divide();
}obj;

void temp :: GetValue1(){
    cout << "Enter first value : ";
    cin >> a;
}

void temp :: GetValue2(){
    cout << "Enter second value : ";
    cin >> b;
}

void temp :: GetOp(){
    cout << "Enter operator : ";
    cin >> op;
}

void temp :: Add(){
    c = a + b;
    cout << a << " + " << b << " = " << c << endl;
    a = c;
    b = 0;
}

void temp :: Sub(){
    c = a - b;
    cout << a << " - " << b << " = " << c << endl;
    a = c;
    b = 0;
}

void temp :: Multi(){
    c = a * b;
    cout << a << " * " << b << " = " << c << endl;
    a = c;
    b = 0;
}

void temp :: Divide(){
    c = a / b;
    cout << a << " / " << b << " = " << c << endl;
    a = c;
    b = 0;
}