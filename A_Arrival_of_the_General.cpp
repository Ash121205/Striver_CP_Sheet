#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int a[n];
    int lh = INT_MIN, li = 0;
    int rh = INT_MAX, ri = 0;

    int h;
    for(int i=0;i<n;i++)
    {
        cin >> h;
        if(h > lh)
        {
            lh = h;
            li = i;
        }
        if(h <= rh)
        {
            rh = h;
            ri = i;
        }

    }

    int ans = li + n - ri - 1;

    if(li < ri) cout << ans << endl;
    else cout << ans - 1 << endl;



    return 0;
}