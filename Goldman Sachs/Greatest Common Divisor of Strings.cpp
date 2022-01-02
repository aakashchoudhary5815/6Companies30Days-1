class Solution {
public:
   
    int gcd(int n,int m)
    {
        if(m==0)
            return n;
        return gcd(m,n%m);
    }
    string gcdOfStrings(string str1, string str2) {
      if(str1+str2 != str2+str1)
          return "";
      int g=gcd(str1.length(),str2.length());
        return str1.substr(0,g);
      
    }
};
