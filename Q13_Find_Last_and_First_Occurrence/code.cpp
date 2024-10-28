#include<iostream>
using namespace std;

int main(){
int arr[] = {5,7,7,8,8,10};

int size = 6;
int start = 0;
int end = size-1;
int firstOccur = -1;
int lastOccur = -1;

// find the first Occurence!
        while(start <= end){
          int mid = start +(end-start)/2;

          if(arr[mid] == 8){
             firstOccur = mid;
             end = mid-1;
          }else if(arr[mid] < 8){ // go on the right!
              start = mid+1;
          }else{ // go on the left!
			  end = mid-1;
          }
        }
        
        
        
size = 6;
start = 0;
end = size-1;
lastOccur = -1;

        
// find the last Occurence!
        while(start <= end){
          int mid = start +(end-start)/2;

          if(arr[mid] == 8){
             lastOccur = mid;
             start = mid+1;
          }else if(arr[mid] < 8){ // go on the right!
              start = mid+1;
          }else{ // go on the left!
			  end = mid-1;
          }
        }
        
        cout <<" First Occurence of element= "<<firstOccur<<endl;
        
        cout <<" Last Occurence of element= "<<lastOccur<<endl;


return 0;
}

