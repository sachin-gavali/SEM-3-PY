#include<stdio.h>
#include<conio.h>
void quickSort(int a[10], int, int);

void main(){
    int i , j , pivot , a[10], temp , n;
    
     printf(" Enter size of the Array :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Array Elements : %d ", i);
        scanf("%d", &a[i]);
    }
    int high ;
    int low ;

    quickSort(a[10], n-1 , 0);

    printf("After sorting elements : ");
    for(int i = 0 ; i < n ; i++){
        printf("%d  ",a[i]);
    }
}
void quickSort(int a[10], int high, int low ){
   int pivot ;
   int temp , i , j ;
   if(low < high){
    pivot = a[low];
    i = low + 1;
    j = high;
    while(i < j){
        while(pivot >= a[i] && i <= high)
        i++;
        while(pivot < a[j]  && j >= low)
            j--;
        if(i < j){
            temp = a[i];
            a[i] = a[j];
            a[j]= temp;
        }
    }
    a[low] = a[j];
    a[j]= pivot;
    quickSort(a,low,j-1);
    quickSort(a,j+1,high);
   }
}