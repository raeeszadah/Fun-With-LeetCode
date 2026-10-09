class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            // 1. Skip non-alphanumeric characters from the left
            while (start < end && !isalnum(s[start])) {
                start++;
            }
            // 2. Skip non-alphanumeric characters from the right
            while (start < end && !isalnum(s[end])) {
                end--;
            }

            // 3. Compare characters after making them lowercase
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            
            // 4. Move pointers inward
            start++;
            end--;
        }

        return true;
        
    }
};