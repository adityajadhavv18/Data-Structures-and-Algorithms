/* To find pivot in an array
we are give nin input a sorted array {1,2,3,4,5,6,7,9} and a rotated array {7,9,1,2,3}
the minimum value in the graph is pivot element
In unsorted array always look for sorting elements in parts like in the above we have one sorted as 7,9 and other as 1,2,3

Here the conditon is if(arr[mid]>=arr[0]) then s = mid + 1 else{ e = mid }

at last s and e wil be returing the same number so we can either retrun s or e
*/
#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
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

int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is at" << pivot(arr, 5) << endl;
}