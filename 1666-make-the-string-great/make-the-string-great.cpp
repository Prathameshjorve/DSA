class Solution {
public:
    string makeGood(string s) {
        string result ="";
//  if(result.size() > 0 && (ch + 32 == result.back() || ch - 32 == result.back())) {
        for(char &ch :s){
            if(result.size() > 0 && (ch + 32 ==result.back() || ch -32 == result.back())){
                // both are capital  small or  small capital equivalent
                    result.pop_back();
            }else{
                result.push_back(ch);
            }
        }


        return result;
        
    }
};