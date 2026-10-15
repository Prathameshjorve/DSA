class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int low=0;
        int high=0;
        int result = INT_MIN;

          unordered_map<char, int>f;
        for(high = 0;high < n ;high++){

            f[s[high]]++;//map madhi add kartoye array che element

            int len = high-low+1;
            while(f.size() < len){

                f[s[low]]--;

                if(f[s[low]] == 0)
                f.erase(s[low]);

                low++;
                len = high -low+1;

            }
            //for equal  
            len =high-low+1;

            result =max(result,len);

        }
        if(result==INT_MIN)
        return 0;

        return result;
        

        
        
        
    }
};