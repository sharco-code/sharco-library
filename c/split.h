#ifndef SPLIT_H
#define SPLIT_H

char *split_before(char *a,char b){
    char *x;
    for(short i; i<10;i++){
        if(a[i]==b) break;
        x[i]=a[i];
    }
    return (char *)x;
}

char *split_after(char *a,char b){
    char *x;
    unsigned char j=0;
    for(unsigned char i; i<10;i++){
        if(j!=0){
            x[j-1]=a[i];
            j++;
        }
        if(a[i]==b) j++;
    }
    return (char *)x;
} 

#endif