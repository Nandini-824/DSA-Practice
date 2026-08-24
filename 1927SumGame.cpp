#include <iostream>
using namespace std;


bool sumGame(string num) {
     int n = num.size();

        int leftSum = 0;
        int rightSum = 0;

        int leftQcount = 0;
        int rightQcount = 0;

        // Left half
        for (int i = 0; i < n; i++) {
            if (num[i] == '?'){
            if(i<n/2){
                leftQcount++;
            }
            else{
                 rightQcount++; ;
            }
        }

        // Right half
        else {
            if (i< n/2){
                leftSum += num[i] - '0';}
            else{
                rightSum += num[i] - '0';}
        }
        
        }


        // Odd number of question marks
        int totalQcount=leftQcount + rightQcount;
        if (totalQcount % 2 == 1)
            return true;

        // Check whether Bob can make both sums equal
         // If Bob can make both sides equal → Alice loses
      int LEFT=2 * leftSum+ 9 * leftQcount;
       int RIGHT =2 * rightSum+ 9 * rightQcount;
       if(LEFT==RIGHT)//Bob wins
       {
        return false;
       }
       else{
        return true;
       }

    
    }

    int main() {
        string num ;
        cout << "Enter the string: ";
        cin >> num;
        bool result = sumGame(num);
        cout << "Result: " << result << endl;
        return 0;
    }
