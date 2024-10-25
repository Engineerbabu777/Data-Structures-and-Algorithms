#include<iostream>
using namespace std;

int main(){
int nums[] = {4,1,2,3};
int size = 4;
int target = 4;
 int start = 0;
        int end = size-1;

        while(start <= end){
            int mid = start +(end - start)/2;
            if(nums[mid] == target){
            	cout<<"mid = "<<mid;
return mid;
            }
          else if((nums[0] < nums[mid]) && (nums[0] <= target >= nums[mid])){
            end = mid - 1;
          }else if((nums[end] > nums[mid]) && (nums[end] >= target <= nums[mid])){
             start = mid + 1; 
          }
		  else{
             start = mid + 1; 
          }
        }

return 0;
}

