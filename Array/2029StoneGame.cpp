//https://leetcode.com/problems/stone-game-ix/description/?envType=daily-question&envId=2026-08-16
#include<iostream>
using namespace std;

int stoneGameIX(int* stones, int stonesSize){
    int count[3]={0,0,0};
   
    for(int i=0; i<stonesSize; i++){
       if (stones[i]%3==0){ 
            count[0]++;
        }
        else if(stones[i]%3==1){
            count[1]++;
        }
        else{
            count[2]++;
        }}

   if(count[0]%2==0){    
    if(count[1]>0 && count[2]>0){
         return true;
    }
         else{
             return false;
         }    
    }
        
 if(count[0]%2==1){
            if(count[1]>count[2]+2 || count[2]>count[1]+2)//if the difference between count[1] and count[2] is greater than 2, then the player who starts first will always win.
            {
                return true;

            }
            else{
                return false;
            }
        }  
    
    }
  


int main() {
    int stones[] = {5,1,2,4,3};
    int stonesSize = sizeof(stones) / sizeof(stones[0]);
    bool result = stoneGameIX(stones, stonesSize);
    cout << "Result: " << result << endl;
    return 0;
}   