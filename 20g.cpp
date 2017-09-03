#include <iostream>
using namespace std;

int main()
{
    int g;

    cout << "Enter a positive integer: ";
    cin >> g;

    for (int i = 1; i <= 10; ++i) {
        cout << g << " * " << i << " = " << g * i << endl;
    }
    
    return 0;
}
