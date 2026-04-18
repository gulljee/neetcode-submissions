class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded = ""
        for s in strs:
            encoded += str(len(s)) + '#' + s
        return encoded

    def decode(self, s: str) -> List[str]:
        decoded = []
        i = 0
        while i < len(s):
            delim_pos = s.find('#', i)
            length = int(s[i:delim_pos])
            decoded.append(s[delim_pos+1 : delim_pos+1+length])
            i = delim_pos + 1 + length
        return decoded