class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int sum =0;
        for(int x :nums){
            sum +=x;

        }
        int left =0;

        for(int i=0;i < n ;i++){
            int right =sum -nums[i] - left;//formula to  calculate suffix

            if(left ==right){
                return i;
            }
            left +=nums[i];
        }
        return -1;
    }
};