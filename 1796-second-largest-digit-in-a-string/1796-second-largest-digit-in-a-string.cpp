#include <algorithm>
class Solution {
public:
    int secondHighest(string s) {
        int arr[500], i=0;
        for(char c: s){
            if(isdigit(c)){
                int digit= c-'0';
                arr[i++]=digit;
            }

        }
        
                                                         sort(arr, arr+i);
       for(int j=i-1;j>=0;j--)      
       {                                            if (arr[j]!= arr[i-1]){
                                                         return arr[j];
                                                         }
       }
                                                            return -1;
                                                         
    
        
    }
};