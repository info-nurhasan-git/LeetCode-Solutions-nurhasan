class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for (int num : nums) {
            mp[num]++;
        }

        // Step 2: Create Max Heap
        priority_queue<pair<int, int>> pq;

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        // Step 3: Get top K frequent elements
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};