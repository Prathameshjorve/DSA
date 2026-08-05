// solution 1
// class Solution {
// public:
//      bool allCapital(string word){

//         for(char ch:word){
//             if(ch <'A' || ch > 'Z')
//             return false;

//         }
//         return true;
        
//      }
//      bool allSmall(string word){

//         for(char ch:word){
//             if(ch <'a' || ch > 'z')
//             return false;

//         }
//         return true;

//      }
//     bool detectCapitalUse(string word) {

//         if(allCapital(word) || allSmall(word) || allSmall(word.substr(1))){
//             return true;
//         }
       
//         return false;
        
//     }
// };
//solution 2
class Solution {
public:
     bool detectCapitalUse(string word){
        int countCapital=0;

        for(char  &ch:word){
            if(isupper(ch))//ch>='a' && ch<='z'
            countCapital++;
     }

     if(countCapital == 0||countCapital==word.length()||(countCapital == 1 && isupper(word[0])))
        return true;

    // if(countCapital==word.length())
    //     return true;

    // if(countCapital=1 && isupper(word[0]))
    //     return true;


    return false;



     }
};