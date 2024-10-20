#include<iostream>
using namespace std;

int main(){

int array[] = {-2,1,-3,4,-1,2,1,-5,4};
int s = 9;

int maxSum = INT_MIN;
for(int i=0; i<s;i++){
	int currSum = 0;
	int perRoundMax = INT_MIN;

	for(int j=i; j<s; j++){

        currSum = currSum + array[j];
		perRoundMax = max(currSum,perRoundMax);

	}
	
	
	maxSum = max(perRoundMax,maxSum);
	
}

cout << "Max Sum : "<<maxSum<<endl;


return 0;
}

