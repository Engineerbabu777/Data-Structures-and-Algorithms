#include <iostream>
using namespace std;

int main()
{
	int array[] = {7,7,4,4,4,7,4};
	
	int maxNum = INT_MIN;
	int count = 0;
	int size = 7;
	
	
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
