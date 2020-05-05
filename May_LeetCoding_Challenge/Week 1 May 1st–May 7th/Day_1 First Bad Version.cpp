//The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    long long int left=0 , right =n;
    long long int mid = (left + right) / 2;

    while(left != right)
    {
        if (isBadVersion(mid)== false ) {left = mid +1 ; mid = (left + right) / 2;}
        else {right = mid ; mid = (left + right) / 2;}

    }
    return mid ;
    }
};
