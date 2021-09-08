class Solution {
public:
    int myAtoi(string s) {
        long long i=0;
        while(s[i]==' '){
            i++;
        }
        int flag=0;
        if(s[i]=='-'){
            flag=1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        while(s[i]=='0'){
            i++;
        }
        string str="";
        long long int ans=0;
        for(;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
                if(flag){
                    if(ans>INT_MAX) return INT_MIN;
                }
                else{
                    if(ans>INT_MAX) return INT_MAX; 
                }
            }
            else{
                break;
            }
        }
        if(flag) ans=-1*ans;
        return (int)ans;
    }
};