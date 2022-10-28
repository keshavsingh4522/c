/* Global includes */
#include <iostream>
using namespace std;

int main()
{
    /* Initialising */
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    /* Prints following string on screen and then takes input */
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        /* Prints the first two terms (Exceptional). */
        if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        
        /*  Adds nth term to (n-1)th term and assignes it's sum to (n+1)th term
         *  t_(n+1) = [t_n + t_(n-1)] 
         */
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    return 0;
}
