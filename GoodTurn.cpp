#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(int a, int b)
{
    if (a + b > 6)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        lulu(a, b);
    }
}
