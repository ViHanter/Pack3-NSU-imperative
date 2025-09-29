#include <stdio.h>

void sorting(int array[],int len){
    int fl = 0,fl2 = 0;
    int per;

    while (!fl){
        for (int i=1;i<len;i++){
            if (array[i]<array[i-1]) {
                fl2=1;
                per = array[i];
                array[i]=array[i-1];
                array[i-1]=per;
            }
        }
        if (fl2==0) break;
        fl2=0;
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int cnt=1;
    int nums[200000];
    int n,num;
    
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&num);
        nums[i]=num;
    }
    sorting(nums,n);
    for (int i=1;i<=n;i++){
        if (nums[i]==nums[i-1]) cnt++;
        else {
            if (i!=n) printf("%d: %d\n",nums[i-1],cnt);
            else printf("%d: %d",nums[i-1],cnt);
            cnt=1;
        }
    }
    
    return 0;
}