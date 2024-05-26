#include <iostream>
using namespace std;

void Binary(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        Binary(n / 2);
        cout << n % 2;
    }
}

int main()
{
    int Number;

    cout << "Enter a number: ";
    cin >> Number;

    cout << "Binary number is : ";
    Binary(Number);

    return 0;
}
