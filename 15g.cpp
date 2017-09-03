#include <iostream>
using namespace std;

int main()
{
    int low, high, n, flag;

    cout << "Enter two numbers(intervals): ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    while (low < high)
    {
        flag = 0;

        for(n = 2; n <= low/2; ++n)
        {
            if(low % n == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }

    return 0;
}
