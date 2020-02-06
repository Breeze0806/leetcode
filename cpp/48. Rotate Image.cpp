class Solution {
public:
    void swap(int& a, int& b){
        int t = a;
        a = b;
        b = t;
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); ++i){
            for(int j = i + 1; j < matrix[i].size(); ++j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0; i < matrix.size(); ++i){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};