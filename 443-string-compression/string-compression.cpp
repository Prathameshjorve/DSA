class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        int index=0;
        int i=0;

        while(i<n){
            char curr_char =chars[i];
            int count =0;

            //find duplicates of  the character and note it in count var

            while(i < n && chars[i]==curr_char){
                count++;
                i++;

            }

            //assign the char into index

            chars[index]=curr_char;
            index++;
           // char[index]=count; it will of multiple number or count so  convert it into string
            // count++;


            if(count >1){
                string count_str=to_string(count);

                for(char &ch:count_str){//assign in index 
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;

        
    }
};