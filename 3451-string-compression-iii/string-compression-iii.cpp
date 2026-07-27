class Solution {
public:
    string compressedString(string word) {
        string comp="";
        if(word.empty()){
            return comp;
        }
        for(int i=0;i<word.length();i++){
            int count=1;
            for(int j=i;(j<word.length()) && (word[i]==word[j]);j++){
                if(i!=j && count!=9){
                    count++;
                }
                if(count==9){
                    comp+=to_string(count);
                    comp+=word[i];
                    i+=count-1;
                    break;
                }
            }
            if(count!=9){
            comp+=to_string(count);
            comp+=word[i];
            i+=count-1;
            }
        }
        return comp;
    }
};