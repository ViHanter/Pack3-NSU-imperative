#include <stdio.h>
#include <ctype.h>

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int inWrd = 0;
    int cnt = 0;
    char pred_sym='\0',chr;

    while (chr != EOF) {
        chr = getchar();
        if (isalpha(chr) && inWrd==0) {
            putchar(chr);
            inWrd=1;
        }
        if (inWrd==1 && !isalpha(chr)) {
            if (cnt-2>=0 && cnt!=0) {
                printf("%d",cnt-2);
                putchar(pred_sym);
                inWrd=0;
                cnt = 0;
            } else {
                cnt = 0;
                inWrd=0;
            }
        } else if (inWrd==1) cnt++;

        if (inWrd==0 && !isalpha(chr) && chr!=EOF) putchar(chr);

        pred_sym=chr;
    }
    return 0;
}