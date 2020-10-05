class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0) return 1;
        int x = log2(N) + 1;

        for (int i = 0; i < x; i++)
         N = (N ^ (1 << i));

      return N;
        
    }
};
