#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,k;
    vector <int> v;

    cout << "Enter the size of the array" << endl;
    int size,value;
    cin >> size;
    cout << "Enter the Array" << endl;
    for(int i=0;i<size;i++)
    {
        cin >> value;
        v.push_back(value);
    }

    m = 256;
    float A = 0.96;

    vector <int> r(m);

    for(int i=0;i<m;i++)
    {
        r[i] = -1;
    }

    for(int i=0;i<v.size();i++)
    {
        int h;
        h = floor(m*(v[i]*A - floor(v[i]*A)));
        r[h] = v[i];
    }
    cout << "h(k)" << "\t" << "k" << endl;
    for(int i=0;i<r.size();i++)
    {

        if(r[i]!=-1)
        {
            cout << i << "\t" << r[i] << endl;
        }
    }
}
