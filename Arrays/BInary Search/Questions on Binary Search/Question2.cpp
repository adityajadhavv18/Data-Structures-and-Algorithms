// Q1Find total number of occurence of 3 in array {1,2,3,3,3,3,5}
//  total number of occurence = (last occurence - first occurence) + 1
// Q2mountain array example {0,1,0} increasing order then decreasing order just like a mountian we have to find the highest element that is the peak in the array
//  the increasing order follows logic of arr[i]<arr[i]+1 "/" and the decreasing order follows arr[i]>arr[i+1] "\"
//  the logical status of the peak is arr[i-1]<arr[i]>arr[i+1] "/\" <- mountain peak

// condition if(arr[mid]<arr[mid + 1]) then s= mid + 1;
// condition else{ end = mid,;}