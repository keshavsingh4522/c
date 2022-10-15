#include <iostream>
using namespace std;

int main()
{
    int n, k1 = 0, k2 = 1, nterm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Check Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << " " << k1;
            continue;
        }
        if(i == 2)
        {
            cout << k2 << " ";
            continue;
        }
        nterm = k1 + k2;
        k1 = k2;
        k2 = nterm;
        
        cout << nterm << " ";
    }
    return 0;
}
