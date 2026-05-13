#include<iostream>
using namespace std;
int Binary_Search(int nums[], int n, int target)
{
    int left = 0;
    int right = n-1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] ==target)
        return mid;
        else if (nums[mid]<target)
        left = mid + 1;
        else
        right= mid-1;
    for(int i=0; i<n; i++){
        if(nums[i]== target)
        {
            return i;

        }
    }
    return -1;

        }
    
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = Linear_Search(arr, size, 3);
    cout << "Element found at index: " << ans << endl;
    return 0;
}