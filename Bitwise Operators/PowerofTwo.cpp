#include<iostream>
using namespace std;

/*

This is a program to check if the given number is power of 2 or not

*/

// // Using Loop Time Complexity O(N)
// bool isPower(int target)
// {
//     int num = 2;

//     while (num <= target)
//     {
//         if (num == target)
//             return true;
        
//         num *= 2;
//     }

//     return false;
    
// }

// Without Loop Time Complexity O(1)
bool isPower(int n)
{
    return (n>0) && ((n & (n-1)) == 0);
}

int main()
{
    int num;

    cout << "Enter the number you want to verify: ";
    cin >> num;

    if (isPower(num))
        cout << num << " is the power of 2" << endl;
    else
        cout << num << " is not the power of 2" << endl;

    return 0;

}