class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,char>mpp,amp;
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
            amp[t[i]]++;

        }
        for(int i=0;i<s.length();i++){
            if(mpp[s[i]]!=amp[s[i]])return false;

        }
        return true;
    }
};
