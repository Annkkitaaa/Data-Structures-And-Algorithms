class Solution {
private:
    void dfs(vector<vector<int>> &ans,int intial,int r,int c,int color){
    int row=ans.size();
    int col=ans[0].size();
    vector<int> dx={0,0,1,-1};
    vector<int> dy={1,-1,0,0};
    for(int i=0;i<4;i++){
        ans[r][c]=color;
        int nx=r+dx[i];
        int ny=c+dy[i];
        if(nx>=0&& nx<row && ny>=0 && ny<col && ans[nx][ny]==intial && ans[nx][ny]!=color ){
            ans[nx][ny]=color;
            dfs(ans,intial,nx,ny,color);
        }
    }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int intial=image[sr][sc];
   
    vector<vector<int>> ans=image;
  
    dfs( ans,intial,sr,sc,color);
    return ans;
    }
};