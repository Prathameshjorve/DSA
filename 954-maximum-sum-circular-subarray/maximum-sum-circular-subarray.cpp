class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=0;// sum of all array element 
        int currmax =0;
        int maxsum = nums[0];// max subarray sum

        int currmin =0;
        int minsum = nums[0];//min subarray sum

        for(int n : nums){
            currmax = max(n , currmax + n);
            maxsum = max(maxsum, currmax);

            currmin = min(n , currmin + n);
            minsum =  min( minsum , currmin);

            totalsum = totalsum + n;


        }

        // if all elememts are negative
        if(maxsum <0){
            return maxsum;
        }

        return max(maxsum, totalsum-minsum);

        
    }
};