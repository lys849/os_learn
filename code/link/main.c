int sum(int *a,int n)
{
    int i,s=0;
    for (i=0;i<n;i++){
        s+=a[i];
    }
    return s;
}
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int result=sum(a,5);
    printf("Sum is: %d\n",result);
    return 0;
}