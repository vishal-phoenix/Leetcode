class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    sort(people.begin(),people.end());

    int sz = people.size();
    vector<vector<int>> nwpepl(sz,vector<int>(2,-1));
    for(int i=0;i<sz;i++){
        for(int j=0;j<2;j++){
            cout<<nwpepl[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<sz;i++){
        int cnt = people[i][1];
        for(int j=0;j<sz;j++){
            if(nwpepl[j][0]==-1 && cnt == 0){
                nwpepl[j][0] = people[i][0];
                nwpepl[j][1] = people[i][1];
                break;
            }else if(nwpepl[j][0]==-1 || nwpepl[j][0]>=people[i][0]){
                cnt--;
            }
        }
    }
        return nwpepl;
        
    }
};