#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n) {
    return pow(a, n);
}

int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}
