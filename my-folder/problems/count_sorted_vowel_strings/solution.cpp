class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>> a(n,vector<int>(5));
        for(int i=0;i<5;i++){
            a[0][i] = 1;
        }
        int sum = 5;
        for(int i=1;i<n;i++){
            for(int j=0;j<5;j++){
                if(j==0){
                    a[i][j] = sum;
                    cout<<a[i][j]<<" ";
                    continue;
                }
                a[i][j] = a[i][j-1]-a[i-1][j-1];
                sum= sum + a[i][j];
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        return sum;
    }
};