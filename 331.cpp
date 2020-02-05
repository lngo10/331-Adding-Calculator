#include <iostream>

using namespace std;


// GLOBAL VARIABLES
int a, b, c;
char o;

// ADD FUNCTION
void add(int a, int b)
{
    c = a + b;
}

// SUBTRACT FUNCTION
void sub(int a, int b)
{
    c = a + -(b);
}

// MULTIPLY FUNCTION
void multiply(int a, int b)
{
    int x = 0;

    while (x < b)
    {
        c = c + a;
        x++;
    }
}
// DIVIDE FUNCTION
void divide(int a, int b)
{
    int x = 0;
    while (c < a)
    {
        x = 0 + b;
        c = c + 1;
    }
}
// EXPONENT FUNCTION
void exp(int a, int b)
{
    int x = 0, y = 0, d = 0;

    while (x < a)
    {
        d = d + a;
        x = x + 1;
    }
    while (y < d)
    {
        c = c + a;
        y = y + 1;
    }
}



// MAIN FUNCTION
int main()
///// HOW TO MAKE EASIER:  int main(int argc, char** argv)
{
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter operation" << endl;
    cin >> o;
    cout << "enter second number" << endl;
    cin >> b;


    //change to switch (case) function for simplicity k

    //if +
    if (o == '+')
    {
        add(a, b);
        return c;
    }
    //if x
    else if (o == 'x' || o == '*')
    {
        multiply(a, b);
        return c;
    }
    else if (o == '-')
    {
        sub(a, b);
        return c;
    }
    else if (o == '/')
    {
        div(a, b);
        return c;
    }
    else if (o == '^')
    {
        exp(a, b);
        return c;
    }
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
