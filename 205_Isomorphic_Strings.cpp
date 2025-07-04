class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){return false;}

        unordered_map<char,char> mapST;
        unordered_map<char,char> mapTS;

        for(int i=0;i<s.length();i++){
            char cs=s[i];
            char ct=t[i];

            if(mapST.count(cs) && mapST[cs] != ct){return false;}
            if(mapTS.count(ct) && mapTS[ct] != cs){return false;}

            mapST[cs]=ct;
            mapTS[ct]=cs;
        }
        return true;
    }
};
