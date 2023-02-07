#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;


    while(t--)
    {
        int n;
        cin >> n;

        string s = to_string(n);

        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != '0')
            {
                int last = s.size()-i-1;
                int num = (s[i] - '0') * pow(10, last);
                v.push_back(num);
            }
        }

        cout << v.size() << endl;

        for(int i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}