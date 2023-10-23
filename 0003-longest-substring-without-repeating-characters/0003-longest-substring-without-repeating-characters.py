class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left, lenLongestSS = 0, 0
        window = set()

        for right in range(len(s)):
            while s[right] in window:
                window.remove(s[left])
                left += 1
            
            window.add(s[right])
            lenLongestSS = max(lenLongestSS, (right - left + 1))
        
        return lenLongestSS