#include<iostream>
using namespace std;

int main(){
	
	int arr[] = {3,5,3,2,0};
	int size = 5;
     int start = 1;
      int end = size - 2;

      while(start <= end){
        int mid = (start + end)/2;

        if(  arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]  ){
        	cout << "mid = "<<mid<<endl;
            return mid;
        }else if(arr[mid] < arr[mid - 1]){
            end = mid -1;
        }else{
            start = mid + 1;
        }
      }


return 0;
}

