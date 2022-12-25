class Solution {
public:
    vector<int> answerQueries(vector<int>& num, vector<int>& q) {
        int n = num.size();

        sort(num.begin(),num.end());
        int i,j;

        for(i=1;i<n;i++){
            num[i] += num[i-1]; 
        }

        vector<int> res(q.size());

        for(i=0;i<q.size();i++){
            vector<int>::iterator ptr = lower_bound(num.begin(),num.end(),q[i]);

            int in = ptr-num.begin();
            //cout<<in<<"\n";
            if(in==n)
                res[i] = in;
            else if(num[in]>q[i])
                res[i]= in;
            else
                res[i] = in+1;
        }

        return res;
    }
};