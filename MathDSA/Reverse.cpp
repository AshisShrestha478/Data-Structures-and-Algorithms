#include<iostream>
using namespace std;

int reverse(int x) {
    int ans=0,digit;
    while(x!=0){
        digit=x%10;
        if((ans>INT_MAX/10) || (ans<INT_MIN/10)) return 0;
        ans=ans*10+digit;
        x/=10;
    }
    return ans;
}

int main()
{
    int nums = 321;
    cout << reverse(nums) << endl;

    return 0;
}
