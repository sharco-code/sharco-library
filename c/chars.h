#ifndef CHARS_H
#define CHARS_H

char *split_before(char *a, char b) {
    char *x;
    unsigned char i=0;
    while(a[i]!=b) {
        x[i]=a[i];
        i++;
    }
    return (char *)x;
}
char *split_after(char *a, char b) {
    char *x;
    unsigned char j=0, i=0;
    while(a[i]!='\0') {
        if(j!=0){
            x[j-1]=a[i];
            j++;
        }
        if(a[i]==b) j++;
        i++;
    }
    return (char *)x;
} 

#endif
