class Solution {
     std::map<int,int> hmap;
     vector<int> topKFrequentVector;
     priority_queue<pair<int,int>> frequencyVector;
     pair<int,int> p;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(auto const& elem: nums) {
            if(hmap.find(elem) != hmap.end()) {
                hmap[elem] = hmap[elem] + 1;
            } else {
                hmap[elem] = 1;
            } 
        }
        for(auto& [key, value]: hmap) {
            p = {value, key};
            frequencyVector.push(p);
        }
        for(int i = 0; i < k; i++) {
            p = frequencyVector.top();
            topKFrequentVector.push_back(p.second); 
            frequencyVector.pop();
        }
        return topKFrequentVector;
    }
};
