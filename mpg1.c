#include <stdio.h>

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,count=0,number; // n - кол-во чисел в последовательности, number - ячейка для числа
    int num[100]; // count - подсчет числе меньших number, num - массив для чисел посл.
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        scanf("%d",&number); // заполнение массива
        num[i]=number;
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){ 
            if (num[i]>num[j]) count++; // сравниваю первое число с последующими
        }
        if (i!=n-1) printf("%d ",count); // вывод результата
        else printf("%d",count);
        count=0;
    }
    return 0;
}