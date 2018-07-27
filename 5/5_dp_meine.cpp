class Solution {
public:
    string longestPalindrome(string s) {
        int slen = s.length();
        string res;
        bool DP[1000][1000] = {false};
        if(slen==1) return s;
        
        for(int i=0; i<slen; i++){
            for(int j=0; j<i+1; j++){
                if((i-j<3||DP[j+1][i-1]) && s[i]==s[j]){
                    DP[j][i] = true;
                    if(DP[j][i] && i+1-j>=res.length()){
                        res = s.substr(j, i+1-j);
                    }
                }
            }
        }
        return res;
    }
};
