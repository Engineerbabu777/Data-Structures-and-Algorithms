#include<iostream>
using namespace std;

int main(){

int array[] = {-2,1,-3,4,-1,2,1,-5,4};
int maxSum = INT_MIN;
int i = 0;
int size = 9;

	int currSum = 0;
while(i < size){
	if(currSum < 0){
		// set to zero!
		currSum = 0;
	}
	
	cout << "currSum : "<<currSum<<endl;
	currSum = currSum + array[i];
	maxSum = max(currSum, maxSum);
	
	i++;
}

cout << "RESULT: "<<maxSum;


return 0;
}

