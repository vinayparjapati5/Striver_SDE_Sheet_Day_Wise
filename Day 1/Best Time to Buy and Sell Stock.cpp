Brute force --> O(N^2)

  int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int maxprofit =0;

        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(prices[j]>prices[i]){
                    profit = prices[j]-prices[i];
                    maxprofit = max(maxprofit,profit);
                }
            }
        }
        return maxprofit;

=============================================================================

Optimal Approach---> O(N)

int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

        for(int i=0; i<n; i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit,prices[i]-minPrice);

        }
        return maxProfit;
    }
