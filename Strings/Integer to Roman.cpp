string Solution::intToRoman(int A) {
    vector<int> d;
    int n=A;
    int l=0;
    string rom="";
    while(n>0){
        l++;
        d.push_back(n%10);
        n=n/10;
    }
    for(int i=l;i>0;i--){
        if(i==4){
            int t=d[i-1];
            while(t>0){
                rom+='M';
                t--;
            }
        }else if(i==3){
            int t=d[i-1];
            if(t==9) rom+="CM";
            else if(t>=5){
                rom+='D';
                while(t>5){
                    rom+='C';
                    t--;
                }
            }else if(t==4){
                rom+="CD";
            }else if(t>0){
                while(t>0){
                    rom+='C';
                    t--;
                }
            }
        }else if(i==2){
            int t=d[i-1];
            if(t==9) rom+="XC";
            else if(t>=5){
                rom+='L';
                while(t>5){
                    rom+='X';
                    t--;
                }
            }else if(t==4){
                rom+="XL";
            }else if(t>0){
                while(t>0){
                    rom+='X';
                    t--;
                }
            }
        }else if(i==1){
            int t=d[i-1];
            if(t==9) rom+="IX";
            else if(t>=5){
                rom+='V';
                while(t>5){
                    rom+='I';
                    t--;
                }
            }else if(t==4){
                rom+="IV";
            }else if(t>0){
                while(t>0){
                    rom+='I';
                    t--;
                }
            }
        } 
        
    }
    return rom;
    
}
