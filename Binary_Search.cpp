#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int value;
    cin >> value;
    int flag = false;
    // ! linear search
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i] == value)
    //     {
    //         flag = true;
    //     }
    // }
    // ! Binary Search
    int l = 0;
    int r = n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid] == value)
        {
            flag = true;
            break;
        }
        else if(a[mid] > value)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if(flag)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}