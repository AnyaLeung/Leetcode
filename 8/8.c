bool IsNeg(char* s, int index){
    return s[index] == '-';
}

int myAtoi(char* str) {
    char* p;
    int res = 0;
    bool wsflag = false;
    int len = strlen(str);
    bool neg = IsNeg(str, 0);

    if(str==null || !len) return 0;
    for(int i=0; i<len; i++){
        if(str[i]==' ') {
            wsflag = true;
            continue;
        }
        
        if(wsflag)
            neg = IsNeg(str, i);
        
        if(str[i]>'9' || str[i]<'0') {
            wsflag = false;
            continue;
        }

        res *= 10;
        int tmp = 0;
        tmp = str[i] - '0';
        res += tmp;
    }

    if(neg){
        return -res;
        
    }
    else{
        printf("ok");
        if(res<0) return -2147483648;
    }

    return res;
}
