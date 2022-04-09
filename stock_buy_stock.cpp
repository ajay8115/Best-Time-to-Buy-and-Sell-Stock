// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &a)
    {
        int n = a.size();
        int maxpro = 0;
        int minsofar = a[0];

        for (int i = 0; i < n; i++)
        {
            minsofar = min(minsofar, a[i]);
            int pro = a[i] - minsofar;
            maxpro = max(maxpro, pro);
        }

        return maxpro;
    }
    
    // int maxProfit(vector<int> &a)
    // {
    //     int n = a.size();
    //     reverse(a.begin(), a.end());
    //     vector<int> b;
    //     b.push_back(a[0]);

    //     for (int i = 1; i < n; i++)
    //     {
    //         b.push_back(max(b[i - 1], a[i]));
    //     }

    //     reverse(a.begin(), a.end());
    //     reverse(b.begin(), b.end());
    //     int maxi = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int d = b[i] - a[i];
    //         maxi = max(maxi, d);
    //     }

    //     return maxi;
    // }
};