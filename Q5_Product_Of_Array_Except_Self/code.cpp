#include<iostream>
#include<vector>
using namespace std;

int main(){

int array[] = {1,2,3,4};
vector<int> ans(4,1);

// calculating the length of nums vector!
        int len = 4;

// cal prefix now!
int prefix = 1;
int startprefix = 0;
vector<int> prefixV(4,1);
for(int i = 1; i < len; i++){
	ans[i] = ans[i-1] * array[i-1];
	
	cout << "index: "<<i<<" = "<<ans[i]<<endl;
//	cout << ans[i]<<endl;
//	startprefix++;
}

// cal suffix!
int suffix = 1;
int startsuffix = 0;
vector<int> suffixV(4,1);
for(int i = 4-2; i >= 0; i--){
	suffix = suffix * array[i+1];
	ans[i] = suffix * ans[i];
	
	cout << "index: "<<i<<" = "<<suffix<<endl;
	cout << ans[i+1] <<" : "<<array[i+1]<<endl;
//	cout << "concat = "<<suffix*ans[i+1]<<endl;
//	startprefix++;
}

// cal ans!
//for(int i = 0;i<len;i++){
//	ans[i] = suffixV[i] * prefixV[i];
//	cout << "ans "<<i<<" = "<< ans[i];
//}


cout << endl << ans[0];
        


return 0;
}

