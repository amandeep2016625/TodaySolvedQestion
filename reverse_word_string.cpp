class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        string result="";
        int n=s.size();
        while(i<n){
            while(i<n && s[i]==' ')
            i++;
             if (i == n)
                break;
            j=i+1;
            while(j<n && s[j]!=' ')
            j++;

           if(result=="")
           result=s.substr(i,j-i);
           else
           result=s.substr(i,j-i) +" "+result;
           i=j+1;


        }
       return result;
    }
};
