#include <iostream>
using namespace std;

int firstoccurence(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s - (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            s = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastoccurence(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s - (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            s = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[5] = {1, 2, 3, 4, 5};
    cout << "first occ " << firstoccurence(even, 5, 3) << endl;
    cout << "last occ " << lastoccurence(even, 5, 3) << endl;
    return 0;
}

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};