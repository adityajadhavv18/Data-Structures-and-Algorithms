/*
23/1/24 Tuesday
sorting is arranging an array into increasing or decreasing order
In selection sort multiple rounds take place where in each round one minimum element is selected and arranged at the right place
IF total elements are n then the total rounds will be n-1
i=0 till i=(n-1)
swaping is used
space complexity = O(1)
time complexity = O(n^2) in both best and worst case
it works good on the array of small size
*/

void selectionsort(int arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i; // first we consider the first element to be minimum (minindex)

        for (int j = i + 1; j < n; j++) // then we traverse to the next element to compare
        {
            if (arr[j] < arr[minindex]) // if next element is smaller than the minindex then the next element becomes the new minindex
                minindex = j;
        }
        swap(arr[minindex], arr[i]); // then here we swap the old minindex with the new one and the chain continues until the array is sorted
    }
}