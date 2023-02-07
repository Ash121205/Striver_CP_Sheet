#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    // char ans[n][m];

    string s1(m, '#');
    string s2(m, '.');

    int dir = 0;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout << s1 << endl;
        }
        else
        {
            if(dir == 0)
            {
                s2[0] = '.', s2[m-1] = '#';
            }
            else
            {
                s2[0] = '#', s2[m-1] = '.';
            }

            cout << s2 << endl;
            dir = 1-dir;
        }
    }

    return 0;
}