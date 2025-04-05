//leetcode 54 IMPORTANT fhir se dekhna.....
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v(m * n);
        int x = 0;
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        int i = 0, j = 0;
        while (top <= bottom && left <= right) {
            for (j = left; j <= right; j++) {
                v[x++] = matrix[top][j];
            }
            top++;
            for (i = top; i <= bottom; i++) {
                v[x++] = matrix[i][right];
            }
            right--;
            if (top <= bottom) {
                for (j = right; j >= left; j--) {
                    v[x++] = matrix[bottom][j];
                }
                bottom--;
            }
            if (left <= right) {
                for (i = bottom; i >= top; i--) {
                    v[x++] = matrix[i][left];
                }
                left++;
            }
        }
        return v;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> result = solution.spiralOrder(matrix);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
