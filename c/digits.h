#ifndef DIGITS_H
#define DIGITS_H

unsigned char digit(int n){
    unsigned char c=1;
    while(n>9){
        n=n/10;
        c++;
    }
    return c;
}

#endif