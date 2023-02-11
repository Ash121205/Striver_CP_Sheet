#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    // int ans = (n);
    while(k--)
    {
        if(n % 10 == 0)
        {
            n/=10;
            // ans/=10;
        }
        else
        {
            n--;
            // ans--;
        }
    }

    cout << n << endl;
    return 0;
}