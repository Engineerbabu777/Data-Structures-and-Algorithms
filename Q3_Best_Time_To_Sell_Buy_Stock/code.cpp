#include<iostream>
#include<vector>
using namespace std;

int main(){

int array[] = {7,5,3,6,4,1};

int minDay = array[0];
      int maxDay = array[0];
      int profit = 0;
      
//      if(size == 0){
//      	return 0;
//	  }
   
      // loop over the prices vector!
      for(int i=0;i<6;i++){
        if(minDay < array[i]){
        	if(maxDay < array[i]){
        	
        	maxDay = array[i];	
        	
        	profit = max(maxDay-minDay,profit);
			}
		}else{
			minDay = array[i];
			maxDay = 0;
		}
		cout << profit <<" : "<<maxDay<<" : "<<minDay<<endl;
      } 
      
      cout << "Profit = "<<profit<<endl;


return 0;
}

