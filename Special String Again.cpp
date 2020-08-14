long substrCount(int n, string s) {
    long result= n;
    int i;
    for(i=0;i< n;i++){
        long re=0;
        while(i+1<n && s[i]==s[i+1]){
        re++;
        i++; 
        }
        result += (re*(re+1))/2;

        int pointer=1;
        while(i-pointer>=0 && i+pointer<n && s[i+pointer]==s[i+1] && s[i-pointer]==s[i+1]){
            result++;
            pointer++;
        }
}
    return result;

}
