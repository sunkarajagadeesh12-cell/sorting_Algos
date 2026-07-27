// Selection sort
#include<stdio.h>
int main(){
    int i,j,mid_idx,temp;
    int arr1[]= {65,25,12,22,11};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    for( i = 0;i<n-1;i++){
        //finding the smallest number from an array
        mid_idx = i;
    for(j = i+1;j<n;j++){
        if(arr1[j]<arr1[mid_idx]){
            mid_idx = j;
        }
    }
    // swaping the first element to the smaller element
    temp = arr1[mid_idx];
    arr1[mid_idx]=arr1[i];
    arr1[i]=temp;
}
    //print the sorted array
    printf("the sorted array is\n");
    for(int i =0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    return 0;

}
