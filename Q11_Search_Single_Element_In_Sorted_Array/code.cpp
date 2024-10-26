#include<iostream>
#include<vector>

using namespace std;

  int singleNonDuplicate(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;

        while(start <= end){
            // cal  mid!
            int mid = start + (end - start)/2;

            // edge cases!
            if( (mid == 0) 
                && 
                (nums[0] != nums[1])
                ){
//                	cout << "1"<<endl;
                return nums[mid];
            }
            
            if(mid == nums.size()-1 && nums[mid] != nums[nums.size()-2]){
                return nums[mid];
            }



            // case 1 ( value found! ):
            if((nums[mid] != nums[mid-1]) &&(nums[mid] != nums[mid+1]) ){
                return nums[mid];
            }

        // case 2 
            if(mid %2 == 0){
               if(nums[mid] == nums[mid-1]){
                end = mid-1;
               }else{
                start = mid+1;
               }
            }

            // case 3 
            if(mid %2 !=0){
                if(nums[mid] == nums[mid-1]){
start = mid+1;
                }else{
end = mid-1;
                }
            }
        }

        return -1;
    }
int main(){
	
	vector<int> test;
	test.push_back(1);
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(3);
	
	test.push_back(4);
	test.push_back(4);
	
	test.push_back(8);
	test.push_back(8);
	
	cout << "ans = "<<singleNonDuplicate(test);
	



return 0;
}

