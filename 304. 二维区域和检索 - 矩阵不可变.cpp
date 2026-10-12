#include <bits/stdc++.h>
using namespace std;
class NumMatrix {
public:
    vector<vector<int>> ss;
    NumMatrix(vector<vector<int>>& matrix) {
        ss.resize(matrix.size()+1,vector<int>(matrix[0].size()+1));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ss[i+1][j+1]=ss[i+1][j]+ss[i][j+1]-ss[i][j]+matrix[i][j];
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
         return ss[row2+1][col2+1]-ss[row2+1][col1]-ss[row1][col2+1]+ss[row1][col1]; 
    }
};
