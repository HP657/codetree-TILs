#include <iostream>
using namespace std;

int aa(int a, char b, int c) {
    if (b == '+') {
        return a + c;
    }
    else if (b == '-') {
        return a - c;
    }
    else if (b == '*') {
        return a * c;
    }
    else if (b == '/') {
        return a / c;
    }
}
int main() {
    int a, c;
    char b;
    cin >> a >> b >> c;
    cout << a << ' ' << b << ' ' << c << " = " << aa(a, b, c);
    return 0;
}