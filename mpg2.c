#include <stdio.h>

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, number; // n - кол-во чисел в посл., number - ячейка для чисел
    int num[100000]; // массив для чисел

    int k=0,sum=0; //
    scanf("%d",&n);

    for (int i=0; i<n;i++){
        scanf("%d",&number);
        num[i]=number;
    }

    while (k<n){
        for (int i=k;i<n;i+=(k+1)) {
            sum+=num[i];
        }
        if (k!=n-1) printf("%d\n",sum);
        else printf("%d",sum);
        sum = 0;
        k++;
    }

    return 0;
}