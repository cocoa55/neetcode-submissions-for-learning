class TimeMap {
   public:
    TimeMap() = default;
    void set(string key, string value, int timestamp) { 
        lookup[key].push_back({value, timestamp}); 
        
    }

    string get(string key, int timestamp) {
        if (lookup.contains(key)) {
            const std::vector<Entry>& vec = lookup[key];
            size_t l = 0;
            size_t r = vec.size() - 1;
            if (vec[l].timestamp > timestamp) return "";
            if (vec[l].timestamp == timestamp) return vec[l].name;
            size_t m = midpoint(l, r);
            while (l <= r) {
                m = midpoint(l, r);
                if (vec[m].timestamp < timestamp) {
                    l = m + 1;
                } else if (vec[m].timestamp > timestamp) {
                    r = m - 1;
                } else {
                    return vec[m].name;
                }
            }
            return vec[r].name;
        } else {
            return "";
        }
    }

   private:
    struct Entry {
        std::string name;
        int timestamp;
    };
    std::unordered_map<std::string, std::vector<Entry>> lookup;
};
