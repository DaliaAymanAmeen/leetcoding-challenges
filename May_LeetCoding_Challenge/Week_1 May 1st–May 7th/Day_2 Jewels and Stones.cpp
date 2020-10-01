class Solution {
public:
    int numJewelsInStones(string J, string S) {



    map <char , int> mymap;

    for (int i = 0 ; i < S.length() ; i++)
    {

        if (mymap.count(S[i]) == 0)  mymap[S[i]] = 1;
        else  mymap[S[i]]++;

    }


    int counter = 0;
    for (int i = 0 ; i < J.length() ; i++)
    {
        if (mymap.count(J[i]) == 0) continue;
        else
        {
            counter += mymap[J[i]];

        }

    }


    return counter;



    }
};
