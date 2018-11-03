#ifndef NUMBERS_H
#define NUMBERS_H

// returns how many digits the number n has
// retorna cuantos dijitos tiene el numero n
unsigned char digit(int n){
    unsigned char c=1;
    while(n>9){
        n=n/10;
        c++;
    }
    return c;
}

//compare if there are 2 consecutive numbers in the number n
//compara si hay 2 numero siguales en el numero n
unsigned char compare(int n){
    unsigned char d = digit(n);
    unsigned char s[d],i=(d-1),m;
    while(n!=0){
        m=n%10;
        n=n/10;
        s[i]=m;
        i--;
    }
    for(i=0;i<d;i++){
        for(m=(i+1);m<d;m++){
            if(s[i]==s[m]) return 1;
        }
    }
    return 0;
}

#endif
