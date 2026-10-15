class Solution {
public:
    int trap(vector<int>& height) {
        int n=size(height);
          
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
             
           
           if(WaterTrapped>0){
             count+=WaterTrapped;    
        }
          }    
          return count;

        
    }
};