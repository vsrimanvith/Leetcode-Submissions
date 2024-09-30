class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        if (color != image[sr][sc]) {
            fill_util(image, sr, sc, color, image[sr][sc]);
        }
        return image;
    }
    void fill_util(vector<vector<int>>& image, int sr, int sc, int color,
                   int oldcolor) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() ||
            image[sr][sc] != oldcolor)
            return;
        image[sr][sc] = color;
        fill_util(image, sr - 1, sc, color, oldcolor);
        fill_util(image, sr + 1, sc, color, oldcolor);
        fill_util(image, sr, sc - 1, color, oldcolor);
        fill_util(image, sr, sc + 1, color, oldcolor);
    }
};