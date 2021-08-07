#include<stdio.h>
void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(arr[i] > *max)
           *max = arr[i];
        if(arr[i] < *min)
           *min = arr[i];
    }
}
int main()
{
    int a[] = {2,54,7,34,876,23,54,87,45,24,6543,234,123,6545,484,2345,45232,6457};
    int min,max;
    int len = sizeof(a) / sizeof(a[0]);
    minMax(a, len, &min, &max);
    printf("\n Minimum value is %d",min);
    printf("\n Maximum value is %d",max);
}
