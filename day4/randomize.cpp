class RandomizedSet {
    unordered_map<int, int> mp;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (mp.find(val) == mp.end()) {
            mp[val] = 1;
            return true;
        }
        else return false;
    }
    
    bool remove(int val) {
        if (mp.find(val) == mp.end()) return false;
        else {
            mp.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        int n = rand() % mp.size();
        auto it = next(mp.begin(), n);
        
        return it->first;
    }
};
