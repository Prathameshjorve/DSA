class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);

        for(char &ch:sentence){
            int index= ch - 'a';
            arr[index]++;

        }
        for(int & count:arr ){
            //traverse  through array after doing calculation in frist loop
            if(count ==0)
                return false;
        }
        return true;



        
    }
};