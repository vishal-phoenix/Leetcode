class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if (m==0) return 0;
        int n = matrix[0].size();
        int result = 0;
        
        
        vector<int>row(n,0);
        for(int i = 0; i<m;i++){
            for (int k = 0; k<n; k++){
                if (matrix[i][k] == '1')
                    row[k] += 1;
                else
                    row[k] = 0;
            }
            int area = largestRectangleArea(row);
            result = max(result, area);
                
        }
        return result;
    }
    
    int largestRectangleArea(vector<int>row){
        row.insert(row.begin(),0);
        row.push_back(0);
        stack<int>Stack;
        Stack.push(0);
        
        
        
        int area = 0;
        for(int i = 1; i<row.size(); i++){
            if (row[i] > row[Stack.top()])
                Stack.push(i);
            else{
                while(row[Stack.top()] > row[i]){
                    int H = row[Stack.top()];
                    Stack.pop();
                    int W = i-Stack.top()-1;
                    
                    area = max(area, H*W);
                }
                Stack.push(i);
            }
        }
        
        
        return area;
    }
};