#include<stdio.h>
int main(){
    int n;
 printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the key to be searched : ");
    scanf("%d",&key);

    int low = 0;
    int high = n-1;
    int ans = -1;
    int count = 0;

    while(low <= high){
        int mid = low + (high-low) / 2;
        if(arr[mid] == key){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        count++;
    }
    printf("%d found at index %d ", key, ans);
    printf("\nNo. of comparisons made : %d", count);
 return 0;
}