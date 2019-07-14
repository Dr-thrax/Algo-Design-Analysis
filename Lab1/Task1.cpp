#include <bits/stdc++.h>
using namespace std;

long long radix2(string s)
{
    long long sum = 0;
    for(int i=0;i<s.size();i++)
    {
        sum += (int)s[i] * pow(2,i);
    }
    return sum;
}

int main()
{

    vector <long long> v(100000);
    for(int i=0;i<100000;i++)
    {
        v[i] = 0;
    }

    string line;
    getline(cin,line);
    vector <string> tok;
    stringstream check(line);
    string intermediate;

    while(getline(check,intermediate,' '))
    {
        tok.push_back(intermediate);
    }
    for(int i=0;i<tok.size();i++)
    {
        v[radix2(tok[i])%99773]++;
    }

    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=0)
        {
            cout<< i << "\t" << v[i] << endl;
        }
    }
}
