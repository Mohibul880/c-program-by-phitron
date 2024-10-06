#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        // Calculate the original number of man-days
        int original_man_days = M1 * D;

        // Calculate the new number of man-days with additional farmers
        int new_man_days = (M1 + M2) * D;

        // Calculate how many fewer days it will take
        int fewer_days = original_man_days / (M1 + M2) - D;

        printf("%d\n", fewer_days);
    }

    return 0;
}
