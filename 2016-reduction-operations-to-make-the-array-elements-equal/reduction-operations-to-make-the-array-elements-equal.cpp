class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n =nums.size();
        
        sort(begin(nums), end(nums));
        
        int opr = 0;

        for(int i = n-1; i >= 1;i--){

            if(nums[i] == nums[i-1])
            continue;

            opr += n-i;


        }
        return opr;
        
    }
};