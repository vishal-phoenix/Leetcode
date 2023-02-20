class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> a;
        
        int mx=right;
        vector<bool>sv(mx+1,true);
        
        sv[1]=false;
        for(int i{2};i<=mx;i++)
        {
            if(sv[i])
            {
                int step=i;
                for(int j{i+step};j<=mx;j+=step)
                {
                    
                    if(sv[j])
                        sv[j]=false;
                    
                    
                }
                
            }
            
        }
//         for(int i{0};i<sv.size();i++)
//         {
            
            
            
//             cout<<i<<"  "<<sv[i]<<endl;
//         }
//          cout<<"&****"<<endl;
        vector<int> ans(2);
        // if(left == 1 && right!=1){
        //     left = 2;
        // }
        for(int i=left;i<=right;i++){
            
            if(sv[i]){
                a.push_back(i);
            }
            
        
        }
       
        // for(int i=0;i<a.size();i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        // vector<int> ans(2);
        if(a.size()<2){
            return {-1,-1};
        }else{
            int b = 0,c = INT_MAX;
            for(int i=0;i<a.size()-1;i++){
                int x = a[i],y = a[i+1];
                int df = y-x;
                if(df<(c-b)){
                    b = x;
                    c = y;
                    ans[0] = x;
                    ans[1] = y;
                }
            }
            return ans;
        }
    }
};