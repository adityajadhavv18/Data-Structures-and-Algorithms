/*
maximum number of pages assigned to a student is mminimum
whenever there is any possible solution store the answer and move to the left part of search space
you need to refer the video again
*/

#include <iostream>

using namespace std;

bool isPossible(arr, int n, int m, int mid)
{
    int studcount = 1; // min student count is kept as 1
    int pagesum = 0;   // initial page sum is kept as zero

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid) // if page sum of books is equal or lesser than the mid then the pages are assigned to the students
        {
            pagesum += arr[i]; // the sum is added until the pages reach the value of mid
        }
        else
        {
            studcount++; // when it reaches mid then a new student is created to assign the remaining ones
            if (studcount > m || arr[i] > mid)
            { // if the student count increases ahead of m (no of students) then false is returned and if arr is greater than stud then also same output
                return false;
            }
            pagesum = arr[i]; // when new student is created the reamining value of array is assigned to it
        }
    }
    return true;
}

int allocatebooks(arr, int n, int m)
{
    int s = 0;   // start = 0
    int sum = 0; // sum of pages of books is zero

    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // sum of total pages of books in an array is calculated
    }
    int e = sum; // the total calculated sum is assigned as end point for the binary search space
    int ans = -1;
    int mid = s + (e - s) / 2; // the mid is calculated by this method

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {                // function is initialised for calculating the final solution
            ans = mid;   // if ans is equal to mid the we traverse to left to find more optimal solution
            e = mid - 1; // here we put end to mid -1 in order to traverse left
        }
        else
        {
            s = mid + 1; // if no optimal solution is found to the left then we traverse right
        }
        mid = s + (e - s) / 2; // mid is again updated
    }
    return ans;
}