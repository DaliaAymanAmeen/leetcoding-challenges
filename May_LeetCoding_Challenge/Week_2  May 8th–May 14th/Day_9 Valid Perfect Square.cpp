class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        if (num == 2) return false;
        for (int i=2; i<num ;i++)
        {
            if ((float)num / (float)i == float(i)) return true;
        }
        
        return false;
    }
};