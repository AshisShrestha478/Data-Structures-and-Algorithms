#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
This is a variation of painter's partation Problem
You can give this patter a shot if you see something like:
Find Max(min), Min(Max)
*/

bool isPossibleValue(vector<int> arr, int size, int totalCow, int minDistance){
    int currCows=1, currDistance=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]-currDistance>=minDistance){
            currCows++;
            currDistance=arr[i];
        }
        if(currCows == totalCow) return true;
    }
    return false;
}

int aggressiveCow (vector<int> arr, int n, int m)
{
    sort(arr.begin(),arr.end());
    int start=1, end=arr[n-1]-arr[0], ans=-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleValue(arr,n,m,mid)){
            ans = mid;
            start = mid+1;
        }
        else end=mid-1;
    }
    return ans;
}

int main()
{
    // vector<int> arr = {10, 1, 2, 7, 5};
    // vector<int> arr = {1,2,8,4,9};
    vector<int> arr = {2, 12, 11, 3, 26, 7};
    int size = arr.size();
    // int cow = 3;
    // int cow = 3;
    int cow = 5;

    cout << aggressiveCow(arr,size,cow) << endl;

    return 0;
}