#include<iostream>
#include<vector>
using namespace std;

// string isPrime(int n){
//     for (int i=2; i*i<=n; i++)
//     {
//         if (n%i == 0) return "Non Prime";
//     }
//     return "Prime";
// }

int primeCount(int n)
{
    if (n < 2) return 0;

    vector<bool> primeNum(n + 1, true);
    primeNum[0] = primeNum[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (primeNum[i])
        {
            for (int j = i * i; j <= n; j += i)
                primeNum[j] = false;
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (primeNum[i]) count++;
    }

    return count;
}

int main()
{
    int n = 10;

    cout << primeCount(n) << endl;
    return 0;
}