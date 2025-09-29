#include <stdio.h>

int max(int array[],int len) {
    int maxik = array[0];
    for (int i=0;i<len;i++){
        if (array[i]>maxik) maxik = array[i];
    }
    return maxik;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int isOpen = 0;
    int num,n;
    int levels[100000];

    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&num);
        levels[i]=num;
    }

    int pred_v = 0,v=0;
    
    for (int level=1;level<=max(levels,n);level++){
        for (int i=0;i<n;i++){
            /*if (levels[i]>=level) printf("%d",level);
            else printf("%d",levels[i]);*/
            if (isOpen==1 && levels[i]>=level) {
                isOpen=0;
                v+=pred_v;
                pred_v=0;
            }
            else if (isOpen==1) {
                pred_v++;
            }
            if (levels[i]>=level && isOpen==0) isOpen=1;
            
            
        }
        isOpen=0;
        pred_v=0;
        //printf(" - %d\n",v);
    }
    printf("%d",v);
    return 0;
}
/*
110111 - 0 
220222 - 0 
320323 - 2 
420324 - 6 
420325 - 6 
*/