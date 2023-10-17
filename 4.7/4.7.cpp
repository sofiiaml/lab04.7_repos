#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;
    cout << "x > 0" << endl << endl;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(4) << "x" << "    | "
        << setw(16) << "log(x)" << " |"
        << setw(6) << "S" << "     |"
        << setw(4) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        n = 0;
        a = (x-1)/(x+1);
        S = a;
        do {
            n++;
            R = (2*n*x*x-4*n*x+2*n-x*x+2*x-1)/(2*n*x*x*+4*n*x+2*n+x*x+2*x+1);
            a *= R;
            S += a;
        } while (abs(a) >= eps);
        cout << "|" << setw(6) << setprecision(2) << x << "  |"
            << setw(13) << setprecision(5) << log(x) << "     |"
            << setw(9) << setprecision(5) << S << "  |"
            << setw(4) << n << "   |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}