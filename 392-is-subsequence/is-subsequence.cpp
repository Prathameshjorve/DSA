class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();

        int i=0;
        int j=0;

        while(i<m && j<n){
            if(s[i] == t[j]){
                i++;//we found i wala char 
            }
            j++;

        }
        return i == m;//we found all char in string s in string t  
        
    }
};