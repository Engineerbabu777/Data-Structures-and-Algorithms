#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
        	int leftSum = 0;
        int rightSum = 0;
            for(int j=0;j<nums.size();j++){
                // calculate left sum!
                  if(j<i){
                  	leftSum += nums[j];
                  	cout << leftSum <<" <- less"<<endl;
				  }
                // calculate right sum!
                if(j>i){
                  	rightSum += nums[j];
                  	cout << rightSum <<" <- big"<<endl;
				}
				// if both are same!
				if(leftSum == rightSum && i!=0){
					cout << "equal";
					cout << " index = "<<i<<endl;
					return i;
				}
            }
        }
        return -1;
    }
int main(){

vector<int> test;
//test.push_back(1);
//test.push_back(7);
//test.push_back(3);
//test.push_back(6);
//test.push_back(5);
//test.push_back(6);

cout << "ans= "<<pivotIndex(test);


return 0;
}

