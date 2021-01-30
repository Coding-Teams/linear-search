#include <stdio.h>
/*
spicoli piersilvio - uniba computer science
linear search of integer
*/
int linearSearch(int[], int);

int i, j, num, result;
int a[] = {5, 3, 4, 1, 10, 6};
int n = sizeof(a) / sizeof(a[0]);


int linearSearch(int arr[], int x){

    int find = 0; //bool integer
    int pos; //to save the position of element searched

    for(i = 0; i < n; i++){
        if(arr[i] == x){
            find = 1;
            pos = i;
        }
    }

    if(find == 0){
        return 1; //to print the msg of not found
    }else{
        return arr[pos];
    }
}


int main(){

    printf("insert the element to search: ");
    scanf("%d", &num);

    int result = linearSearch(a, num);

    if(result == 1)
        printf("not found! \n");
    else
        printf("%d", result);

    return 0;
}
