#include <iostream>
using namespace std;

int main()
{
	int array[] = {7,1,1,7,3,7,2,8,1,9,4,1,1,1,1,1,1};
	
	int maxNum = INT_MIN;
	int count = 0;
	int size = 19;
	
	
	for(int i=0;i<size;i++){
		// if count is zero set new value to be max!
	if(count == 0){
		maxNum = array[i];
		// if prev and now num are same then add!
		count++;
	}else if(maxNum == array[i]){
		count++;
		// else remove one point!
	}else{
		count--;
	}
	
	}
	
	cout << "Answer: "<<maxNum <<endl;
	
    
    return 0;
}
