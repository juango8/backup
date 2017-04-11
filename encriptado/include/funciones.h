inline int mod(int a, int b){
        if (a == b)
            return 0;
        else if (0 < a and a < b)
            return a;
        else{
            int q, r;
            q = a/b;
            r = a - (q*b);
            if (r < 0)
                r = r + b;
            return r;
        }
}

inline int euclides(int a, int b){
    int temp;
    while (b != 0){
        temp = mod(a,b);
        a = b;
        b = temp;
    }
    return a;
}


