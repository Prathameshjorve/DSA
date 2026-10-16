class Solution {
public:
    int find(vector<int> &a)
    {
    int maxc=-1;
    for(int i=0; i < 256; i++)//array  of alphabets
    maxc=max(maxc,a[i]);
    return maxc;
    }


    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int>f(256,0);
        int low=0;
        int high=0;
        int res=INT_MIN;
        for(high=0; high < n; high++){
            f[s[high]]++;

            int maxcnt = find(f);//counting the char means frequency 
            int len=high-low+1;//calculating the leng of  the substr
            int diff =len-maxcnt;// calculting the total count of char 
            

            while(diff>k){
                f[s[low]]--;//info is wrong
                low++;
                maxcnt=find(f);
                len = high-low+1;
                diff=len-maxcnt;
            }
            len=high-low+1;
            res=max(res, len);
        }
        return res;
        
        
    }
};