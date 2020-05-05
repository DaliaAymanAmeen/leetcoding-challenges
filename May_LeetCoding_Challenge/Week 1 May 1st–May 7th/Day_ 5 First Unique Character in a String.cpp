#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map <char,int> mymap;
    for (int i =0 ; i<s.length() ; i++)
    {
        if ( mymap.count(s[i]) == 0 ) mymap[s[i]] =1;
        else mymap[s[i]] ++ ;
    }

    for (int i =0 ; i<s.length() ; i++)
    {
       if (mymap[s[i]]==1) return i;
    }

    return -1;
}

//nother solution from "https://helloacm.com/how-to-find-first-unique-character-in-a-string/"
/*class Solution {
public:
    int firstUniqChar(string s) {
        int cnt[26] = {0};
        for (auto c: s) {
            cnt[c - 97] ++;
        }
        for (auto i = 0; i < s.length(); i ++) {
            if (cnt[s[i] - 97] == 1) {
                return i;
            }
        }
        return -1;
    }
}; */