#include <stdio.h>
#include <time.h>

void f1(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum++;
    }
    printf("%d\n",sum);
}

void f2(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j=j*2){
            sum++;
        }
    }
    printf("%d\n",sum);
}

void f3(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            sum++;
        }
    }
    printf("%d\n",sum);
}

int f4(int n){
    int sum=0;
    if(n==0||n==1){
        return 1;
    }
    return f4(n-1)+f4(n-2);
}

int main()
{
    int arr[100000];
    int n=0,sum=0;
    scanf("%d",&n);
	clock_t startTime = clock();
    //f3(n);
    sum=f4(n);
    clock_t endTime = clock();
    printf("运行时间%.9f秒\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);
    return 0;
}

