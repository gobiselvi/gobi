#include <iostream>
using namespace std;

int main()
{
    int low, high, i, f;

    cout << "Enter two numbers(intervals): ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    while (low < high)
    {
        f = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                f= 1;
                break;
            }
        }

        if (f == 0)
            cout << low << " ";

        ++low;
    }

    return 0;
}
