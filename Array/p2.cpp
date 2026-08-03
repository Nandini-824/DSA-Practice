// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// we must buy  before sell
#include<iostream>
#include<climits>
using namespace std;


void maxProfit( int *arr, int n){

   
int buyDay[100000]; 
buyDay[0] = INT_MAX; 
for(int i=1; i<n; i++){
     buyDay[i] = min(buyDay[i-1], arr[i-1]); 
    } 
     int maxProfit = 0; 
     for(int i=0; i<n; i++){
         maxProfit = max(maxProfit, arr[i] - buyDay[i]);
         } 
cout<<"Max Profit is: "<<maxProfit<<endl; }

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxProfit(arr,n);
    return 0;
}