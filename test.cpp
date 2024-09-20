#include <iostream>
#include <cmath>
using namespace std;

// Function declarations
void Power(float, float);
void Sine(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
void Baselog(float);
void addition(float, float);
void subtraction(float, float);
void multiply(float, float);
void division(float, float);

int main()
{
    float a, b;
    int z;

    cout << "WHAT YOU WANT TO FIND: " << endl;
    cout << "Press '1' for Power: " << endl;
    cout << "Press '2' for Sin: " << endl; 
    cout << "Press '3' for Square: " << endl; 
    cout << "Press '4' for Cos: " << endl; 
    cout << "Press '5' for Tan: " << endl;
    cout << "Press '6' for Log: " << endl;
    cout << "Press '7' for Base Log: " << endl;
    cout << "Press '8' for add: " << endl;
    cout << "Press '9' for subtract: " << endl;
    cout << "Press '10' for division: " << endl;
    cout << "Press '11' for multiply: " << endl;

    cin >> z;
    switch(z)
    {
    case 1:
        cout << "Enter the Number for Calculating its Power: " << endl;
        cin >> a;
        cout << "Enter the Power for a Number: " << endl;
        cin >> b;
        Power(a, b);
        break;

    case 2:
        cout << "Enter the Number for Calculating SIN: " << endl;
        cin >> a;
        Sine(a);
        break;

    case 3:
        cout << "Enter the Number for Calculating Square: " << endl;
        cin >> a;
        Square(a);
        break;

    case 4:
        cout << "Enter the Number for Calculating COS: " << endl;
        cin >> a;
        Cos(a);
        break;

    case 5:
        cout << "Enter the Number for Calculating TAN: " << endl;
        cin >> a;
        Tan(a);
        break;

    case 6:
        cout << "Enter the Number for Calculating LOG: " << endl;
        cin >> a;
        Log(a);
        break;

    case 7:
        cout << "Enter the Number for Calculating LOG WITH BASE 10: " << endl;
        cin >> a;
        Baselog(a);
        break;

    case 8:
        cout << "Enter first number " << endl;
        cin >> a;
        cout << "Enter Second number" << endl;
        cin >> b;
        addition(a, b);
        break;

    case 9:
        cout << "Enter first number " << endl;
        cin >> a;
        cout << "Enter Second number" << endl;
        cin >> b;
        subtraction(a, b);
        break;

    case 10:
        cout << "Enter first number " << endl;
        cin >> a;
        cout << "Enter Second number" << endl;
        cin >> b;
        multiply(a, b);
        break;

    case 11:
        cout << "Enter first number " << endl;
        cin >> a;
        cout << "Enter Second number" << endl;
        cin >> b;
        division(a, b);
        if (b == 0) {
            cout << "Invalid: Division by zero" << endl;
        }
        break;

    default:
        cout << "Invalid choice." << endl;
        break;
    }

    return 0;
}

// Function definitions
void Power(float x, float y)
{
    float p;
    p = pow(x, y);
    cout << "Power: " << p << endl;
}

void Sine(float x)
{
    float s;
    s = sin(x);
    cout << "Sin: " << s << endl;
}

void Square(float x)
{
    float sq;
    sq = sqrt(x);
    cout << "Square root of " << x << " is: " << sq << endl;
}

void Cos(float x) 
{
    float c;
    c = cos(x);
    cout << "COS: " << c << endl;
}

void Tan(float x)
{
    float t;
    t = tan(x);
    cout << "TAN: " << t << endl;
}

void Log(float x)
{
    float l;
    l = log(x);
    cout << "Natural Logarithm: " << l << endl;
}

void Baselog(float x)
{
    float bl;
    bl = log10(x);
    cout << "LOG with Base 10: " << bl << endl;
}

void addition(float x, float y)
{
    float ad;
    ad = x + y;
    cout << "Addition: " << ad << endl;
}

void subtraction(float x, float y)
{
    float subt;
    subt = x - y;
    cout << "Subtraction: " << subt << endl;
}

void multiply(float x, float y)
{
    float mul;
    mul = x * y;
    cout << "Multiplication: " << mul << endl;
}

void division(float x, float y)
{
    if (y != 0) {
        float div;
        div = x / y;
        cout << "Division: " << div << endl;
    } else {
        cout << "Invalid: Division by zero" << endl;
    }
}
