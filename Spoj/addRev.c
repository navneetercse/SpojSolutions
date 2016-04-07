long int addRev(long int n){
    long int s=0,d;
    while(n!=0){
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    return s;
}
