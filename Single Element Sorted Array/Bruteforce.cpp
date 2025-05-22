#include<iostream>
using namespace std;

int main()
{
    int size = 9;
    int arr[size] = {1,1,2,3,3,4,4,8,8};
    int ans = 0;

    for (int i=0; i<size; i++){
        ans ^= arr[i];
    }

    cout << ans << endl;

    return 0;
}