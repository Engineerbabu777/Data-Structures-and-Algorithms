#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        // calculating the length of nums vector!
        int len = nums.size();

        // created an answer variable!
        vector<int> ans;

        // lets loop over the vector!
        for(int i=0; i < len; i++){
          
          // cal the prefix!
          int prefix = 1;
          int startprefix = 0;

          while(startprefix < i){
            prefix = prefix * nums[startprefix];
            startprefix++;
          }

        //   cout << "prefix = " << prefix << endl;


          // cal the suffix!
          int suffix = 1;
          int startsuffix = i+1;
          while(startsuffix < len){
            suffix = suffix * nums[startsuffix];
            startsuffix++;
          }

        //   cout << "suffix = " << suffix << endl;

          ans.push_back(prefix * suffix);

        }
}
int main(){



return 0;
}

