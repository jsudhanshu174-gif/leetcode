class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq = {}
        freq2 = {}

        for ch in s:
            if ch in freq:
                freq[ch] += 1
            else:
                freq[ch] = 1

        for ch in t:
            if ch in freq2:
                freq2[ch] += 1
            else:
                freq2[ch] = 1

        return freq == freq2