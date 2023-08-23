#include<stdio.h>

void merge_sort(int A[], int left, int right);
void merge(int A[], int left, int mid, int right);

int main()
{
    int i, A[] = {9,8,7,7,7,6,5,4,3,2,2,0,0,0,0,1,1};
    int length_of_A = sizeof(A)/sizeof(int);

    for(i=0;i<length_of_A;i++){
        printf("%d ", A[i]);
    }
    printf("Length of Array %d\n", length_of_A);

    merge_sort(A, 0, length_of_A);

    length_of_A = sizeof(A)/sizeof(int);
    for(i=0;i<length_of_A;i++){
        printf("%d ", A[i]);
    }
    printf("Length of Array %d\n", length_of_A);
    return 0;
}


void merge_sort(int A[], int left, int right)
{
    if(left>=right){
        return;
    }

    int mid = left+(right-left)/2;
    printf("Mid : %d\n",mid);

    merge_sort(A, left, mid);
    merge_sort(A, mid+1, right);

    merge(A, left, mid, right);
}

void merge(int A[], int left, int mid, int right)
{
    int i,j,size_of_left_arr, size_of_right_arr, size_of_arr;

    size_of_left_arr = (mid-left)+1;
    size_of_right_arr = right-mid;
    size_of_arr = right-left+1;

    int L[size_of_left_arr], R[size_of_right_arr];

    for(i=0;i<size_of_left_arr;i++)
    {
        L[i] = A[left+i];
    }
    for(i=0; i<size_of_right_arr; i++)
    {
        R[i] = A[mid+1+i];
    }

    i=0;
    j=0;
    int count;

    for(count=left;count<left+size_of_arr;count++)
    {
        if(L[i]<=R[j] && i<size_of_left_arr)
        {
            A[count] = L[i];
            i++;
            continue;
        }
        if(L[i]>R[j] && j<size_of_right_arr)
        {
            A[count]=R[j];
            j++;
        }
    }

}
