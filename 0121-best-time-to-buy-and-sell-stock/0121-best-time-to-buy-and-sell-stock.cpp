class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       int buyDay[100000];
    buyDay[0] = INT_MAX;  
    for(int i=1; i<n; i++){
        buyDay[i] = min(buyDay[i-1], prices[i-1]);
       }
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        maxProfit = max(maxProfit, prices[i] - buyDay[i]);
       
    }
    return maxProfit;
      
    }
};