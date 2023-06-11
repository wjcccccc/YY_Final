#include <stdio.h>

void bubbleSort(int data[], int n, int (*compare)(int, int));
int compare_ascending(int a, int b);
void listElements(int vals[], int size);

int main(){
    int data[] = {7, 2, 3, 6};

    printf("Before Sorting: \n");
    listElements(data, sizeof(data)/sizeof(int));

    bubbleSort(data, sizeof(data)/sizeof(int), compare_ascending);
    printf("sort in ascending order:\n");
    listElements(data, sizeof(data)/sizeof(int));

    return 0;
    
}


 
void bubbleSort(int data[], int n, int (*compare)(int, int)){
    int i, j, temp;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(compare(data[j], data[j+1]) > 0){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

int compare_ascending(int a, int b){
    return a - b;
}

void listElements(int vals[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", vals[i]);
    }
    printf("\n");
}

 
