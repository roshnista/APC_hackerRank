#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY numbers
 *  2. INTEGER k
 */

int countPairs(vector<int> n, int k)
{
    int temp[n.size()];
    int l=0,c=0;
    sort(n.begin(),n.end());
    for(int i=0;i<n.size()-1;i++)
    {
        if(n[i]!=n[i+1])
            temp[l++]=n[i];
    }
    temp[l++]=n[n.size()-1];

    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(temp[i]+k==temp[j])
                c++;
        }
    }
return c;
}

int main()
