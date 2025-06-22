 #include <stdio.h>

int main()
{
    int n, position;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &position);

  
    // if (position < 1 || position > n) {
    //     printf("Invalid position!\n");
    //     return 1;
    // }


    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }


    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
