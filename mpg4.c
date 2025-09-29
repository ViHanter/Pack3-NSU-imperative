#include <stdio.h>

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, num;
    int nums[5000];
    int sum=0;
    
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&num);
        nums[i]=num;
    }
    int maxim=nums[0];
    int maxR=0,maxL=0;
    
    for (int l=0; l<n;l++){
        sum+=nums[l];
        for (int r=l+1;r<n;r++){
            sum+=nums[r];
            if (sum>maxim){
                maxim = sum;
                maxR=r,maxL=l;
            }
        }
        sum = 0;
    }
    printf("%d %d %d",maxL,maxR,maxim);
    return 0;
}