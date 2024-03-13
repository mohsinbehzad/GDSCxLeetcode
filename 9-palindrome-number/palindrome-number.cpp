class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int start = 0;
        int end = str.length();
        while(start<end)
            {
            if(str[start] != str[end-1])
                {
                    return false;
                }
                start++;
                end--;
            }
        return true;
    }
};