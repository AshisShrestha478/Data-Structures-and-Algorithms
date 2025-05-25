#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> nums, int n, int m, int maxWall){
    int currentPainter = 1, currTotalwall = 0;
    for (int i=0; i<n; i++){
        if(nums[i]>maxWall) return false;
        if(currTotalwall+nums[i] <=  maxWall){
            currTotalwall += nums[i];
        }
        else{
            currentPainter++;
            currTotalwall = nums[i];
        }
    }
    return currentPainter > m ? false : true;
}

int partition(vector<int> nums, int n, int m)
{
    int start=INT_MIN,end=0,ans=0;
    for(int i=0; i<n; i++){
        end += nums[i];
        start = max(start,nums[i]);
    }
    while (start<=end){
        int mid=start+(end-start)/2;
        if(isValid(nums,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr ={40,30,10,20};
    int m = 2;
    int size = arr.size();

    cout << partition(arr,size,m) << endl;

    return 0;
}