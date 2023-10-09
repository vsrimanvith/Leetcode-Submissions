//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for(int i = 0 ; i < n ; i++){
            sum += mat[i][i];
            sum += mat[n-1-i][i];
        }   
        if(n % 2 == 1) sum -= mat[n/2][n/2];
        return sum;
    }
};
