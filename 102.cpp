#include <iostream>
#include <cmath>
using namespace std;
int maxSumSubarray(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int main() 
{
    int arr[] = {45,-3,4,-7,-78,1005,}, n = 7;
    cout<<maxSumSubarray(arr, n);
}