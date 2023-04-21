#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ele;
    int cnt = 0;

    for (auto i : v)
    {
        if (cnt == 0)
        {
            cnt++;
            ele = i;
        }
        else if (i == ele)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    // Now checking if the element is occuring > n/2 times
    cnt = 0;
    for (auto i : v)
    {
        if (i == ele)
        {
            cnt++;
        }
    }

    if (cnt > n / 2)
        cout << ele << endl;
    else
        cout << "Not present" << endl;
    return 0;
}