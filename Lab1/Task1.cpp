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

    vector <long long> v;

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
        v.push_back(radix2(tok[i]));
    }

    sort(v.begin(),v.end());
    long long count = 0;

    for(int i=0;i<v.size()-1;i++)
    {
        if(i==0)
        {
            count++;
            continue;
        }
        if(v[i]!=v[i+1]) count++;
    }

    cout << count << endl;
}
