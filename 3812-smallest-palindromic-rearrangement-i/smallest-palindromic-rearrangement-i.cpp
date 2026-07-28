class Solution {
public:
    string smallestPalindrome(string s) {
        int n= s.length();//size of string
        int mid = n/2;

        sort(begin(s), begin(s) + mid);//[0],[3] till index 3-1 i.e 0,1,2
        for(int i=0;i<mid;i++){
            s[n-1-i]=s[i];

        }
        return s;


        
    }
};