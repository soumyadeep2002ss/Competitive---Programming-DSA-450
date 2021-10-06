#include <iostream>
#include <cmath>
using namespace std;

bool isPower(long double x)
{
    long double sr = log2(x);
    return ((sr - floor(sr)) == 0);
}

int main()
{
    long long int t, c, a, b, a1, b1;
    float p1, p2;
    cin >> t;
    while (t--)
    {
        cin >> c;
        if (isPower(c))
        {
            p1 = (log2(c));
            a1 = pow(2, p1) - 1;
            b1 = pow(2, p1 + 1) - 1;
        }
        else
        {
            p1 = floor(log2(c));
            p2 = ceil(log2(c));
            a1 = pow(2, p1) - 1;
            b1 = pow(2, p2) - 1 - c + pow(2, p1);
        }
        cout << a1 * b1 << "\n";
    }
    return 0;
}
