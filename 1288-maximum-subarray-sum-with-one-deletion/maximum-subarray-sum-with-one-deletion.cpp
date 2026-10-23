class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int no_delete =arr[0];
        int one_delete = INT_MIN;
        int result  = arr[0];

        for(int i =1; i < n; i++){
            int Prevnodelete =no_delete;
            int Prevonedelete =one_delete;      
            no_delete =max(arr[i], no_delete + arr[i]);

            int v2;
            if(Prevonedelete == INT_MIN){
                v2 =INT_MIN;
            }else{
                v2=Prevonedelete + arr[i];
            }
            one_delete = max(v2,  Prevnodelete);

            result = max(result, max(no_delete, one_delete));


        }
        return result;


    }
};