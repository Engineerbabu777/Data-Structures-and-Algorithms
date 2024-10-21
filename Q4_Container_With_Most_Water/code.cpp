#include<iostream>
using namespace std;

int main(){

int array[] = {1,8,6,2,5,4,8,3,7};

int start = 0;
int end = 8;

int h = 0;
int w = 0;
int area = 0;
//if(size == 1){
//	return nums[0];
//}
while (start < end){
	h = min(array[end],array[start]);
	w = end - start;
	area = max(h * w,area);
//	cout << area<<" - area : "<<w<<" - width : "<<h<<" - height "<<endl;
	
	if(array[start] < array[end]){
		start++;
	} else{
		end--;
	}
}

cout << "area = "<<area<<endl;

return 0;
}

