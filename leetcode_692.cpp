class Solution {
public:
    struct Compare {
        bool operator()(pair<string, int>& a,
                        pair<string, int>& b) {

            if (a.second == b.second) {
                return a.first > b.first;
            }

            return a.second < b.second;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;

        // Step 1: Count frequency
        for (string word : words) {
            mp[word]++;
        }

        // Step 2: Max Heap
        priority_queue<
            pair<string, int>,
            vector<pair<string, int>>,
            Compare
        > pq;

        // Step 3: Insert {word, frequency}
        for (auto it : mp) {
            pq.push({it.first, it.second});
        }

        // Step 4: Get top K words
        vector<string> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }
};