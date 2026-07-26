class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n =nums.size();
        int dup=-1;
        int missing=-1;

        for(int i = 0; i < n; i++){
            if(nums[abs(nums[i])-1] < 0){//duplicaates aLREADY FOUND
                dup  = abs(nums[i]);
            }else{
                nums[abs(nums[i])-1] *=(-1);

// if(nums[abs(nums[i])-1]<0)
            }
        }
        for(int i=0; i<n;i++){
            if(nums[i] > 0){
                missing = (i+1);
                break;

            }
        }
         return {dup,missing};
    }
};