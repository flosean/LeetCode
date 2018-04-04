#include <stdio.h>
#include <stdlib.h>

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

}

int main(void)
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    int i, a1[n1], a2[n2];

    double ans;
    ans = findMID(a1, n1, a2, n2);
    printf("%d\n", ans);

    return 0;
}
