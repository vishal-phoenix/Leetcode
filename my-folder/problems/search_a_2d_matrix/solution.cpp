class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int x) {
        int n = a.size();
        int m = a[0].size();
        int i=0,j=m-1;
        bool check = false;
        while(i<n && j>=0){
            if(a[i][j]==x){
	            check = true;
	            break;
	        }else if(a[i][j] > x){
	            j--;
	        }else{
	            i++;
	        }
        }
        return check;
    }
};