vector<string> Solution::fizzBuzz(int A) {
    vector<string> str;
    str.resize(A);
    for(int i=1;i<=A;i++){
        if(i%3==0 and i%5==0){
            str[i-1]="FizzBuzz";
        }else if(i%3==0){
            str[i-1]="Fizz";
        }else if(i%5==0){
            str[i-1]="Buzz";
        }else{
            str[i-1]=to_string(i);
        }
    }return str;
}