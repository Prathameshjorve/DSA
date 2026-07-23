class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int num1=INT_MAX;//infinite assign 1 and 2
        int num2=INT_MAX;

        for(int i = 0 ; i < n; i++){
            //first ask num1
            int num3=nums[i];

            if(num3 <= num1){
                num1=num3;
            }
            else if(num3<=num2){
                num2=num3;
            }else{//num1<num2= life is set of num1 and num2 
                return true;
            }
        }
        return false;


        
    }
};