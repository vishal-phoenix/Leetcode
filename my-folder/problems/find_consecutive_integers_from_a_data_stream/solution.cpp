class DataStream {
public:
//unordered_map<int,int> mp;
int v,p,cnt=0;
    DataStream(int value, int k) {
        v = value;p = k;
    }
    
    bool consec(int num) {
        cnt++;
        //mp[num]++;
        if(num==v){
            if(cnt>=p ){
                return true;
            }
        }else{
            cnt=0;
        }
        return false;

    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */