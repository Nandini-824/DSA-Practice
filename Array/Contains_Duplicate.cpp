#include<iostream>
#include<algorithm>
using namespace std;

bool containsDuplicate(int* nums, int n) {
    
    sort(nums, nums+n);
     for(int i=0;i<n-1;i++){
       cout<<nums[i]<<" ";}
    for(int i=0;i<n-1;i++){
     
            cout<<"Comparing: "<<nums[i]<<" and "<<nums[i+1]<<endl;

        if(nums[i]==nums[i+1]){
            return true;
        }
    }
      return false;
    }
int main(){

    int nums[] = {1,3,3, 3, 4, 3, 2, 4,2};
    int n = sizeof(nums)/sizeof(nums[0]);
    bool result = containsDuplicate(nums, n);
    if(result){
        cout<<"Array contains duplicate elements"<<endl;
    }
    else{
        cout<<"Array does not contain duplicate elements"<<endl;
    }   
}