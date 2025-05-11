#include <stdio.h>

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);

    long long ar[N];
    long long prefix[N + 1];
    prefix[0] = 0;


    for (int i = 0; i < N; i++) {
        scanf("%lld", &ar[i]);
        prefix[i + 1] = prefix[i] + ar[i];
    }

   
    for (int i = 0; i < Q; i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", prefix[r + 1] - prefix[l]);
    }

    return 0;
}
