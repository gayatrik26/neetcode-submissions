class Solution {
    bool checkEqual(int a[26], int b[26]){
        for(int i=0;i<26;i++){
            if(a[i] != b[i])return false;
        }
        return true;
    }
public:
    bool isAnagram(string s, string t) {
        int s1[26] = {-1};
        int t1[26] = {-1};
        for(int i=0;i<s.size();i++){
            int ind = s[i] - 'a';
            s1[ind]++;
        }
        for(int i=0;i<t.size();i++){
            int ind = t[i] - 'a';
            t1[ind]++;
        }
        if(checkEqual(s1,t1))return true;
        return false;
    }
};
