//It's not the best solution, but it works :)

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        if (trust.size() == 1) return trust[0][1];
        if (trust.size() == 0) return 1 ;
        
        //to check most trusted
        map <int , int> mymap;
        int currentMax = 0 ;  //most trusted
        int arg_max = 0;
        for (int i =0; i<trust.size() ; i++)
            mymap[trust[i][1]]++;
        
        for (auto i = mymap.begin() ; i != mymap.end() ; i++)
        {
             if (i ->second > currentMax)
             {
             arg_max = i->first;
             currentMax = i->second;
             }
        } 
        

        int total = 0;
        for (int i = 1 ; i < N ; i++) total += i ;
        
        int comp=0;
        for (int i =0; i<trust.size() ; i++)
        {
            if (trust[i][1]==arg_max) comp+=trust[i][0];
        }
        
        if (comp<total) return -1;
        

        
        //now gonna check if the most trusted is trusting anybody
        for (int i =0; i<trust.size() ; i++)
            if (trust[i][0]==arg_max) return -1 ;

    
        return arg_max;
    }
};