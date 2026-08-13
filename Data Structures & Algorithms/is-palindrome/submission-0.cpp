class Solution {
    char low(char c){
        c=tolower(c);
        return c;
    }
public:
    bool isPalindrome(string s) {
        string rev,str;
        for(int i=0;i<s.length();i++){
            s[i]=low(s[i]);
            if(isalnum(s[i]))str.push_back(s[i]);
        }
        for(int i=str.length()-1;i>=0;i--){

  
            rev.push_back(str[i]);
        }
        return str==rev;
    }
};
