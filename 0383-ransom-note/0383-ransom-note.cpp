class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freqs;
        
        for (auto &ch : magazine) freqs[ch]++;
        
        for (auto &ch : ransomNote) {
            if (freqs[ch] <= 0) return false;
            freqs[ch]--;
        }
        
        return true;
    }
};