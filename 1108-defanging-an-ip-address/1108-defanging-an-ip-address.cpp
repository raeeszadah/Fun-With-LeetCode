#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = ""; // Initialize empty string

        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                ans += "[.]"; // FIX 1: Clearly append the defanged period
            } 
            else {
                ans += address[i]; // FIX 2: Append the normal digits safely
            }
        }
        
        return ans;
    }
};
