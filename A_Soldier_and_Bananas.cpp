#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    int cost = 0;
    for(int i=1;i<=w;i++)
    {
        cost += i*k;
    }
    if(cost > n)
    cout << abs(n-cost) << endl;
    else cout << 0 << endl;
    return 0;
}