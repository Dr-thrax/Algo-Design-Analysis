#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,k;
    vector <int> v;

    int size,value;
    cin >> size >> value;

    for(int i=0;i<size;i++)
    {
        cin >> value;
        v.push_back(value);
    }

    m = 157;

    vector <int> r(157);
    for(int i=0;i<r.size();i++)
        r[i] = 0;

    for(int i=0;i<v.size();i++)
    {
        r[v[i]%m] = v[i];
    }

    for(int i=0;i<r.size();i++)
    {
        if(r[i]!=0)
        {
            cout << i << "\t" << r[i] << endl;
        }
    }
}
