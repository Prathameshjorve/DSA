class Solution {
public:
    int fun(int n){
        // ex - n=56
        // d=8;
        // n=58/10
        // =5
        int sum=0;
        while(n>0){
            int d = n % 10;

            n=n/10;

            sum = sum+d*d;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow =n;
        int fast =n;
        while(fast !=1){
            slow = fun(slow);
            fast = fun(fun(fast));//fast -> next ->next
            // fast = fun(n);

        
        if( slow == fast && slow !=1){
            return false;
        }
        }
        return true; // while loop ends

        // fast =1;

    

        
    }
};