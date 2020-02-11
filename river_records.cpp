#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);




int maxTrailing(vector<int> a) 
{
    vector<pair<int,int>> v;
    for(int i=0;i<a.size();i++)
        v.push_back(make_pair(i,a[i]));

    sort(v.begin(),v.end());

    int min=v[0].second;
    int max=0;

    for(int i=1;i<v.size();i++)
    {
        if(v[i].second-min > max)
            max=v[i].second-min;
        if(v[i].second < min)
            min=v[i].second;
    }
    if(max==0)
        return -1;
    return max;
}

int main()
