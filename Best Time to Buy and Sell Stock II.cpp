class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int n  = prices.size();
        int first = prices[0];
        for(int i = 0;i<n;i++){
            if(prices[i]>first){
                maxi+=(prices[i]-first);
            }
            first = prices[i];
        }
        return maxi;
    }
};
