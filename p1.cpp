// https://lightoj.com/problem/greetings-from-lightoj

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        cout << "Case " << i << ": " << sum << "\n";
        sum = 0;
    }

    return 0;
}