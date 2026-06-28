class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.length(); 
        for(int i=0,j=n-1;i<n;i++,j--){
             while(!isalnum(static_cast<unsigned char>(s[i])) || s[i]==' '){
                i++; 
                if(i>n)break;
             }
             while(!isalnum(static_cast<unsigned char>(s[j])) || s[j]==' '){
                j--;
                if(j<0)break;
             }
             if(i>j)break;
            if(tolower(s[i])==tolower(s[j])){
                continue;
            }else{
                return false;
            }
        } return true;
    }
};
