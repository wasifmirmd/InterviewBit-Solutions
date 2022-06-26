//Figure out how to extract digit at ith place using some mathematics without using extra space.
int Solution::isPalindrome(int A) {
    string s=to_string(A);
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-1-i]){
         return 0;
          break;
        }
    }
    return 1;
}
