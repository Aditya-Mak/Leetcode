class Solution {
public:
    int maxProfit(vector<int>& price) {
        int buy=INT_MAX;
        int sell=INT_MIN;
        int ans=0;
        for(int i=1;i<price.size();i++){
            //buy pointer for buying a stock at lower price
            //sell pointer for sell a stock at a higher price
            //compare with ans 
            if(price[i-1]<buy){   //7,1,1
                buy=price[i-1];    //7,1
                sell=price[i];      //1,5
            }
            if(sell<price[i]){
                sell=price[i];
            }
            ans=max(ans,sell-buy);
        }
        return ans;
    }
};