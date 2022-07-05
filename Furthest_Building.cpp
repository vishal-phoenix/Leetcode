#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        int i=0;
        priority_queue<int> q;
        for(i;i<h.size()-1;i++){
            if(h[i+1]<=h[i])continue;
            int d = h[i+1] - h[i];
            if(d<=bricks){
                q.push(d);
                bricks -= d; 
            }else if(ladders>0){
                if(q.size()){
                    int x = q.top();
                    if(x>d){
                        bricks += x;
                        q.pop();
                        q.push(d);
                        bricks -= d;
                    }
                }
                ladders--;
            }
            else{
                break;
            }
        }
        return i;
    }
};

int main(){
    Solution S;
    vector<int> h{4,2,7,6,9,14,12};
    int bricks = 5,ladders = 1;
    cout<<S.furthestBuilding(h,bricks,ladders);
    
}
