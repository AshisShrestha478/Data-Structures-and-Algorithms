#include<iostream>
#include<vector>
using namespace std;

/*
This is code has time complexity of O(nlogn)
*/

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){ // O(n)
    int students=1, pages=0;

    for(int i=0; i<n; i++){
        if(arr[i]>maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }
        else{
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

int allocatedBooks(vector<int> &arr, int n, int m){ // O(logN*n)
    if (m>n){
        return -1;
    }

    int sum = 0;
    for (int i=0; i<n; i++){ // O(n)
        sum += arr[i];
    }

    int ans = -1;
    int st=0, end=sum; // range of possible answers

    while (st<=end){ // O(logN) (N = range of possible answers)
        int mid = st+(end-st)/2;
        if (isValid(arr,n,m,mid)){ // left search
            ans = mid;
            end = mid-1;
        }
        else{ // Right search
            st = mid+1;
        }
    }
    return ans;
}

int main()
{
    // vector<int> arr = {2,1,3,4};
    vector<int> arr = {15,17,20};
    int n=4, m=2;

    cout << allocatedBooks(arr,n,m) << endl;

    return 0;
}