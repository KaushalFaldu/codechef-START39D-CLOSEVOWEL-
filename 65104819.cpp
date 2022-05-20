#include <bits/stdc++.h>
using namespace std;

#define int long long
const int M = 1e9 + 7;
signed main()
{
    int t;
    cin >> t;
    set<char> special;
    special.insert('c');
    special.insert('g');
    special.insert('l');
    special.insert('r');
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        long long ans = 1;
        for (char ch : s)
            if (special.find(ch) != special.end())
                ans = (ans * 2) % M;
        cout << ans << '\n';
    }
    return 0;
}