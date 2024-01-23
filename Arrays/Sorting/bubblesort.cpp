/*
It is very simple sorting technique where rounds are n-1 and in every round we compare element on the  basis of two conditions
if a<b ignore and if a>b then swap
in every i^th round of bubble sort its i^th largest elemnt is placed at the right place
i=o till i=n-i
time complexity O(n^2) best case = O(n) worst case O(n^2)
space complexity constant
*/
#include <iostream>
using namespace std;
void bubblesort(int arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // for round 1 to n-1
        bool swapped = false;
        for (int j = 0; j < n - 1; j++)
        {
            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break; // for array which is already sorted this helps to optimize code
        }
    }
}