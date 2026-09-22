class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_kharch=0;
        int total_kamai=0;
       for (int i=0;i<n;i++){
       
        total_kharch+=cost[i];
        total_kamai+=gas[i];
       }
       if(total_kamai < total_kharch){
        return -1;
       }

       int total=0;
       int result=0;
         for (int i=0;i<n;i++){
            total=total+ gas[i]-cost[i];
        if(total<0){
            total=0;
            result=i+1;
        }
         }
 return result;
         
}
};