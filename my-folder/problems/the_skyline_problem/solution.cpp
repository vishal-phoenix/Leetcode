class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        
        vector<pair<int, int>> mp;
        for(auto &building : buildings){
            mp.push_back({building[0], building[2]});
            mp.push_back({building[1], -building[2]});
        }
        /* 
		 * This sorting is required to handle the scenario when you have -ve and 
		 * +ve height on the same pos. 
		 * consider  [2, 3, 3] [3, 5, 3], On position 3 you have  -ve and +ve -> first
		 * process the +ve height and then process the -ve height
		 */
        sort(begin(mp), end(mp), [](pair<int, int> &first, pair<int, int> &second){
            if(first.first == second.first)
            {
                return first.second > second.second;
            }
            
            return first.first < second.first;
        });
        
        /*for(auto [key, value] : mp){
            std::cout<< key << value << endl;
        }*/
        
        vector<vector<int>> ret;
        multiset<int, greater<int>> h;
        h.insert(0);
        
        int maxi = 0;
        int prev = 0;
        for(auto &[value, height] : mp){
            if(height >= 0){
                h.insert(height);
            }else{
                h.erase(h.find(abs(height)));
            }
            
            auto curr = *h.begin();
            if(curr != prev){
                ret.push_back({value, curr});
                prev = curr;
            }
        }
        
        return ret;
    }
};