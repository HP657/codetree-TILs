#include <iostream>
using namespace std;
int main() {
    int n, m, b, c;
    cin >> n >> m;
    int a[n][n] = {0};
    for (int i = 0; i < m; i++)
    {
        cin >> b >> c;
        a[b - 1][c - 1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}