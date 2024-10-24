#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
        
        int size = nums.size();
        int low = 0;
        int mid = 0;
        int high =size-1 ;

        while(mid <= high){
            // case 1: 
            if(nums[mid] == 0){
                // needs to put zeo at start( at low )  
               swap(nums[low],nums[mid]);
               low++;
               mid++;
            // case 2: 
            }else if(nums[mid] == 1){
                // one will come automatically in between so if one comes move mid! 
             mid++;
            // case 3: 
            }else{ // mid == 2
   swap(nums[mid],nums[high]);
   high--; // as we put two at last index( at highs )!

            }
        }
    }
int main(){

vector<int> test(4,1);

sortColors(test);

cout<< "Result = " <<endl;
 


return 0;
}

