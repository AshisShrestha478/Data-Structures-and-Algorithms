// Problem 121 Buy and Sell Stocks
// My approach and it is O(n^2) which is not optimal

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = INT_MIN, profit = 0;
//         for (int i=0; i<prices.size()-1; i++)
//         {
//             for (int j=i+1; j<prices.size(); j++)
//             {
//                 profit = prices[j]-prices[i];
//                 maxProfit = max(profit, maxProfit);
//             }
//         }
//         if (maxProfit <= 0) return 0;
//         else return maxProfit;
//     }
// };

// Learned Optimal Solution which is O(n)
// Assume that all the day of selling and take min from the past day
// Keeping account of max profit and min val

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minVal = prices[0], profit = 0, difference;
//         for (int i=1; i<prices.size(); i++){
//             difference  = prices[i]-minVal;
//             profit = max(profit, difference);
//             minVal = min(minVal, prices[i]);
//         }
//         return profit;
//     }
// };