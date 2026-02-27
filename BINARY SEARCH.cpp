#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;

    int l = 0, r = n - 1;

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(a[mid] == x)
        {
            cout << mid;
            return 0;
        }
        else if(a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << -1;

    return 0;
}
