#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    // array input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    // Query input
    for (int i = 0; i < q; i++)
    {
        int value;
        cin >> value;
        int flag = false;
        // for(int i=0; i<n; i++)
        // {
        //     if(a[i] == x)
        //     {
        //         flag = true;
        //     }
        // }
         // ! Binary Search
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == value)
            {
                flag = true;
                break;
            }
            else if (a[mid] > value)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}