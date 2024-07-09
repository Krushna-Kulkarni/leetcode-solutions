class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int smallest = prices[0];
    int profit = 0;
        for  (int i = 1 ; i < prices.size(); i++){
           int currProfit = prices[i] - smallest; 
           if(currProfit > profit){
            profit = currProfit;
           }
           if(prices[i] < smallest){
            smallest = prices[i];
           }
        }
      
       return profit;
    }
};