// Find a solution to the equation x^3 + 2*x - 1 = 0 between [0, 1/2]
// using Banach fixed-point theorem.
// Consider the function f(x) = (1 - x^3) / 2.

#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    double res = (1 - pow(x, 3)) / 2;
    return res;
}

int main() {
    double const epsilon = 0.0001;  // absolute tolerance

    double ans;  // initial value 0
    cout << "Enter the initial value between [0, 0.5]: ";
    cin >> ans;

    while (abs(func(ans) - ans) > epsilon) {
        ans = func(ans);
        cout << ans << endl;
    }
    cout << "The solution is: " << ans << endl;

    return 0;
}