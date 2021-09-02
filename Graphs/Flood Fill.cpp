class Solution {
    void flood(vector<vector<int>>& image, int sr, int sc, int prevCol,int nc){
        if(sr >= image.size() || sr < 0 || sc >= image[sr].size() || sc < 0 || image[sr][sc] != prevCol){
         return;
     }
    image[sr][sc]=nc;
        vector<int>i{-1,0,1,0};
        vector<int>j{0,1,0,-1};
        
        for(int x=0;x<4;x++){
        flood(image,sr+i[x],sc+j[x],prevCol,nc);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        int prevCol=image[sr][sc];
        if(prevCol == newColor)
 	    return image;
        flood(image,sr,sc,prevCol,newColor);
        return image;
    }
    
};
