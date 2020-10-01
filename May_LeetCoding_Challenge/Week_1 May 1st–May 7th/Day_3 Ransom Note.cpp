class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {


    map <char , int> mymap;

    for (int i = 0 ; i < magazine.length() ; i++)
    {

        if (mymap.count(magazine[i]) == 0)  mymap[magazine[i]] = 1;
        else  mymap[magazine[i]]++;

    }


    for (int i=0 ; i<ransomNote.length() ; i++)
    {
        if (mymap.count(ransomNote[i]) == 0 || mymap[ransomNote[i]] ==0 )  return 0;
        else
            mymap[ransomNote[i]]-=1 ;
    }
    return 1;


    }
};
