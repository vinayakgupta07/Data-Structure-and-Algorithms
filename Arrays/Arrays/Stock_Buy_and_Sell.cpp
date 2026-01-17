# Stock Buy and Sell

// ⏱️ Complexity
//     Time: O(n)
//     Space: O(1)

class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
     int profit=0;
     int mini=arr[0];
     for(int i=1;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(arr[i],mini);
     }
     return profit;
    }
};

