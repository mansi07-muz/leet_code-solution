class Solution:
    def isPalindrome(self, s: str) -> bool:
        reverse="".join(s.lower() for s in s if s.isalnum())
        return reverse==reverse[::-1]
        