#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
double findMID(int *nums1, int nums1Size, int *nums2, int nums2Size) {
    int tot_n;
    int i = 0 ,j = 0 ,k = 0;

    tot_n = nums1Size + nums2Size;
    int *tot_a = malloc(tot_n * sizeof(int));
    double ans;

    while ( i < nums1Size && j < nums2Size ) {
        if ( nums1[i] < nums2[j] )
            tot_a[k++] = nums1[i++];
        else
            tot_a[k++] = nums2[j++];
    }

    while ( i < nums1Size )
        tot_a[k++] = nums1[i++];
    while ( j < nums2Size )
        tot_a[k++] = nums2[j++];
/*
    for ( i = 0 ; i < tot_n ; i ++ )
        printf("%d ", tot_a[i]);
    printf("\n");
*/
    if ( (tot_n % 2) != 0 ) {
        ans = (double) tot_a[tot_n/2];
    }
    else if ( (tot_n % 2) == 0 ){
        ans = (double) (tot_a[tot_n/2-1] + tot_a[tot_n/2]) / 2;
    }

    return ans;
=======
double findMID(int *a1, int n1, int *a2, int n2) {
    int tot_n;
    int i, j, k;

    tot_n = n1 + n2;
    int tot_a[tot_n];

    k = 0;
    i = 0;
    j = 0;
    while ( k < tot_n ) {
        if ( a1[i] < a2[j] ) {
            tot_a[k] = a1[i];
            i ++;
        }
        else if ( a1[i] > a2[j] ) {
            tot_a[k] = a2[j];
            j ++;
        }
        else {
            tot_a[k] = a1[i];
            k ++;
            i ++;
            tot_a[k] = a2[j];
            j ++;
        }
        k ++;
    }

    double ans;

    if ( (tot_n % 2) != 0 ) {
        ans = tot_a[tot_n/2+1];
        return ans;
    }
    else {
        ans = (tot_a[tot_n/2] + tot_a[tot_n/2+1]) / 2;
        return ans;
    }

>>>>>>> 6085de04e2072380a2da002cc5df559355e47c54
}

int main(void)
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

<<<<<<< HEAD
    int i;
    int a1[n1], a2[n2];

    for ( i = 0 ; i < n1 ; i ++ )
        scanf("%d", &a1[i]);
    for ( i = 0 ; i < n2 ; i ++ )
        scanf("%d", &a2[i]);


    double ans;
    ans = findMID(a1, n1, a2, n2);
    printf("%lf\n", ans);

=======
    int i, a1[n1], a2[n2];

    double ans;
    ans = findMID(a1, n1, a2, n2);
    printf("%d\n", ans);
>>>>>>> 6085de04e2072380a2da002cc5df559355e47c54

    return 0;
}
