class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // using slope comparision between every 2 points
        if (coordinates.size()==2 ) return true ;
        int y = coordinates[1][1] - coordinates[0][1] ;
        int x =coordinates[1][0] - coordinates[0][0]; 
        
        if ( coordinates[1][1] - coordinates[0][1] == 0) //if they are parralel to y axis so the slope will equal                                                             to (x/0) so this is special case to avcoid this 
        {
            for  (int i = 2 ; i< coordinates.size();i++)
            {
                if (coordinates[i][1] - coordinates[0][1] != 0) return false;
            }
            return true;
        }
        
        
        float comp_true = (float)y /(float) x ;
        cout<<comp_true<<endl;
        //cout<< result << result1 << comp_true ;
        float comp;
        for (int i = 2 ; i< coordinates.size();i++)
        {
                 
             y= coordinates[i][1] - coordinates[0][1]; 
             x = coordinates[i][0]- coordinates[0][0];
             comp =(float) y / (float)x ;
            cout<< comp<<endl;
               if (comp_true != comp) return false;
        }
        
        
        return true;
    }
};