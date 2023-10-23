class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0, current = 0;
        for (vector<int> person : accounts) {
            current = 0;
            for (int bank : person) {
                current += bank;
            }
            
            if (max < current) max = current;
        }
        
        return max;
    }
};