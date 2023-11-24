// In linear search if n=100 in worst case we will traverse all 100 values which is not feasible
// Binary search is only applicable on monotoning functions that is it is either applicable on increasing order or decreasing order of array
//  ex 3 5 9 13 27 and the key given is == 13
//  the middle  number is 9 so we compare key with the middle number 13>9 so we compare and find the key on the right side of the array
//  middle number = (starting index + ending index)/2
// here it is 0+4/2=2nd index that is 9
//  after splitting the array we futher compare it with same technique of finding through middle number until we find the key solution

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return key;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(even, 6, 8);
    cout << "Index of 8 is " << index;
    return 0;
}