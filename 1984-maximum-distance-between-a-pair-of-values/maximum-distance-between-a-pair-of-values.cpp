class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {

        int m =nums1.size();
        int n =nums2.size();
        int result =0;

        int i = 0;//will itereate on nums 1
        int j = 0;//will itereate on nums 2 

        while(i < m && j < n){

            if(nums1[i] > nums2[j]){
                i++;
            }else{
                result = max(result, j-i);
                j++;
            }

        }
        return result;
        
    }
};