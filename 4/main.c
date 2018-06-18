#include <stdio.h>
#include <stdlib.h>

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
}

int main(void)
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    int i;
    int a1[n1], a2[n2];

    for ( i = 0 ; i < n1 ; i ++ )
        scanf("%d", &a1[i]);
    for ( i = 0 ; i < n2 ; i ++ )
        scanf("%d", &a2[i]);


    double ans;
    ans = findMID(a1, n1, a2, n2);
    printf("%lf\n", ans);


    return 0;
}
