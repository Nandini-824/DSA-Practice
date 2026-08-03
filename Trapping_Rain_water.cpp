#include<iostream>
#include<climits>
using namespace std;


int WaterTrap( int *height, int n){

   
int leftMax[20000]; 
leftMax[0] = height[0];
int RightMax[200000];
RightMax[n-1] = height[n-1];
  int count=0;

for(int i=1; i<n; i++){
     leftMax[i] = max(leftMax[i-1], height[i-1]); 
    }  
for(int i=n-2; i>=0; i--){  
          RightMax[i] = max(RightMax[i+1], height[i+1]);
     } 
     
         
         for(int i=0; i<n; i++){
          
             int MinBar = min(leftMax[i], RightMax[i]);
           
             int WaterTrapped = MinBar - height[i];
             cout<<"MinBar: "<<MinBar<<" "<<"Height: "<<height[i]<<" "<<"WaterTrapped: "<<WaterTrapped<<" "<<endl;
           
           if(WaterTrapped>0){
             count+=WaterTrapped;    
        }
          }    
          return count;
}

     
int main(){
    int height[] = {5,4,3,0,3,4,5};
    int n = sizeof(height)/sizeof(height[0]);
    int result = WaterTrap(height,n);
    cout<<"Total water trapped: "<<result<<endl;

    return 0;
}
