class Solution {
public:
    int search(vector<int>& num, int tar) {
        int st=0;
        int en=num.size()-1;
        while(st<=en){
            int mid=st+((en-st)/2);
            if(num[mid]==tar){
                return mid;
            }


            if(num[st]<=num[mid]){ //left sorted
                if(num[st]<=tar && tar<=num[mid]){
                    en=mid-1;
                }else{
                    st=mid+1;
                }
            }else{
                    if(num[mid]<=tar && tar<=num[en]){
                        st=mid+1;
                    }else{
                        en=mid-1;
                        }
                    }
            }
            return -1;
    }
};