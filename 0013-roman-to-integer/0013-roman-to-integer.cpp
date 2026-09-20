class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int total = 0;
       

        for (int i = 0; i < n; i++)
         {
            int val = value(s[i]);

            if (i + 1 < n && val < value(s[i + 1])) {
                total -= val;
            } else {
                total += val;
            }
        }
        return total;
    }
        
    
    int value(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        return 1000; 
    }
};