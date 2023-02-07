#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;

    int a[n];
    int giv[101], rec[101];
    for(int i=1;i<=n;i++) 
    {
        cin >> a[i];
        giv[i] = a[i];
        rec[a[i]] = i;
    }

    for(int i=1;i<=n;i++)
    {
        cout << rec[i] << " ";
    }

    return 0;
}