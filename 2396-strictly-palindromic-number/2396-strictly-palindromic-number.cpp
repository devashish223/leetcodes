class Solution {
public:
    bool isPalindrome(string s){
        int i = 0,j=s.length()-1;
        
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        
        return true;
    }
    
    bool isStrictlyPalindromic(int n) {
            for(int i = 2;i<=n-2;i++){
                string s = "";
                int nn = n;
                
                while(nn){
                    s+=to_string(nn%i);
                    nn/=i;
                }
                
                if(!isPalindrome(s)){
                    return false;
                }
                
            }
        
        return true;
    }
};