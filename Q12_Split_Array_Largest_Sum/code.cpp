class Solution {
private:
    bool isValid(vector<int>& nums, int mid, int k){
        
 int sum = 0 , student = 1 ;

        for ( int i = 0 ; i < nums.size() ; i++ ){

            if(sum + nums[i] <= mid ) sum += nums[i] ;

            else {
                student++ ;
                sum = nums[i] ; 
                if ( student > k || nums[i] > mid ) return false ;
            }
        }
        return true ;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        
        int start = 0;
        int end = 0;
        int ans = 0;

        // if nums size is one!
        if(nums.size() == 1){
            return nums[0];
        }

      

        // CALCULATE THE SUM OF ALL VALUES!
        for(int  i= 0;i <nums.size();i++){
            end += nums[i];
        }

        if(k == 1){
            return end;
        }

        while(start <= end){
            int mid = start+(end - start)/2;

            if(isValid(nums,mid,k)){
          
              end = mid-1;
                  ans = mid;
            }else{
              start = mid +1;
            }
        }

        return ans;
    }
};
