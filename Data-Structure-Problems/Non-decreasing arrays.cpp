///Non-decreasing arrays

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define MAX 100
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;                               //101rror
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

#define T while(t--)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define for3(i,a,b) for(i=a;i<=b;i=i+2)
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
#define for4(i,a,b) for(i=a;i>=b;i=i-2)

#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ll long long

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        ll A[n];
        for(int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        ll B[n];
        B[0] = A[0];

        for(int i = 1; i < n; i++)
        {
            if(A[i] >= B[i - 1])
            {
                B[i] = A[i];
            }
            else
            {
                ll v = A[i];
                ll w = B[i - 1];
                ll x = (w / v);
                ll y = (x * v);
                ll z = ((x + 1) * v);

                if(y == w)
                {
                    B[i] = y;
                }
                else
                {
                    B[i] = z;
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            cout << B[i];
            cout << " ";
        }
        cout << endl;
    }


    return 0;
}
