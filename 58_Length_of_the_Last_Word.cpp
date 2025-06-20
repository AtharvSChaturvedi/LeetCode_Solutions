class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty() return 0;

        int length=0;
        int i=s.size()-1;

        while(i>=0 && s[i]==' '){
            i--;
        }
        
        while(i>=0 && s[i]!=' '){
            length++;
            i--;
        }
        return length;
    }
};
