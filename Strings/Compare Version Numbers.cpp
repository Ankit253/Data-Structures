int Solution::compareVersion(string A, string B) {
    vector<string> s1,s2;
    replace(A.begin(),A.end(),'.',' ');
    replace(B.begin(),B.end(),'.',' ');
    
    int M=1000000007;
    stringstream ssa(A);
    string word;
    while(ssa>>word){
        s1.push_back(word);
    }
    stringstream ssb(B);
    string word1;
    while(ssb>>word1){
        s2.push_back(word1);
    }
    
    int maxlen=max(s1.size(), s2.size());
    for(int i=0;i<maxlen;i++){
        string v1="";
        string v2="";;
        if(i<s1.size()){
            stringstream ss1(s1[i]);
            ss1>>v1;
            int g = 0;
            while (v1[g] == '0'){
                g++;
            }v1.erase(0, g);
            if(v1.length()==0) v1+='0';
        }else v1="0";
        
        if(i<s2.size()){
            stringstream ss2(s2[i]);
            ss2>>v2;
            int h = 0;
            while (v2[h] == '0'){
                h++;
            }
            v2.erase(0, h);
            if(v2.length()==0) v2+='0';
        
        }else v2="0";
        if(v1.length()<v2.length()) return -1;
        else if(v1.length()>v2.length()) return 1;
        else{
            for(int z=0;z<v1.length();z++){
                if(v1[z]<v2[z]) return -1;
                else if(v1[z]>v2[z]) return 1;
            }
        }
    }
    return 0;
}
