class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        vector<vector<int>>dir= {{1,0},{0,1},{-1,0},{0,-1}};
         int n = grid.size();
          int m = grid[0].size();
          queue<vector<int>>q;
           q.push({0,0,0,k});
            vector<vector<int>>vis(n , vector<int>(m,-1));
             
             vis[0][0]=1;
              
              while(!q.empty()){
                auto val = q.front(); 
                q.pop();
                    int i = val[0]; 
                    int j = val[1];
                     int step = val[2];
                      int rem= val[3]; 
                         

                         if (i == n - 1 && j == m - 1) {
                return step;
            }  
                         for(auto d : dir){
                               
                            int ni = i+d[0];
                            int nj = j+d[1];
                             
                             if(ni>=0 && ni<n &&nj>=0 &&nj<m){
int nrem = rem;
    
    if(grid[ni][nj]==1) nrem--;

       if(nrem<0) continue ;
    
      if(vis[ni][nj] >= nrem ) continue;
       
       vis[ni][nj] = nrem;
        
         q.push({ni,nj,step+1 ,nrem});
          



                             }
                         }
              }
             return -1;
                 
    }
};