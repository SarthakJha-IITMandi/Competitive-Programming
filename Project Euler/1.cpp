#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <numeric>
#include <chrono>

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll sum = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 or i % 5 == 0)
            sum += i;
    }
    print(sum);
    return 0;
}