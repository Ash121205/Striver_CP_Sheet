#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;

    bool flag = false;
    int cnt = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            cnt++;
            // flag = true;
        }
    }

    if(cnt == 4 || cnt == 7) flag = true;

    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}