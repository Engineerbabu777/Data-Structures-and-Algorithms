class Solution {
public:
    int mySqrt(int x) {
        long long int possibleAns;

        // we are going to apply search space concept here!

        if(x == 1){
            return 1;
        }

        if(x == 0){
            return 0;
        }


        int start =0 ;
        int end = x;

        while(start <= end){
            long long int mid = start+(end-start)/2;

            if(mid*mid == x) return mid;

            if(mid*mid < x){
                possibleAns = mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    
    return possibleAns;
    }
};
