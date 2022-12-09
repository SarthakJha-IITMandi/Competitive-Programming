#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <numeric>

#define REP(i, a, b) for (int i = (a); i <= (b); i++)
#define REP_Dec(i, a, b) for (int i = (a); i >= (b); i--)
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FOR1(i, n) for (int i = 1; i <= n; i++)
#define print(n) cout << n << endl
#define mp make_pair
#define pb push_back
#define eb emplace_back

using namespace std;

typedef long long int ll;
const int inf = 1e9;
const ll N = 1'000'000'000'000L;
int fib(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ans = 0, n = 0;
    while (fib(n) <= 4'000'000)
    {
        if (fib(n) % 2 == 0)
            ans += fib(n);
        n++;
    }
    print(ans);
    return 0;
}