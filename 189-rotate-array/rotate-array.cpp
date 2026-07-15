class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();//k=3
        k%=n;//k=2
        vector<int>temp(n);
        for(int i=0;i<k;i++){
            temp[i]=nums[n-k+i];
        }
        for(int i=0;i<n-k;i++){
            temp[k+i]=nums[i];
        }
        nums=temp;
    }
};