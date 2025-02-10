#include <stdio.h>
#include <omp.h>

int main() {
    int num_threads = omp_get_max_threads();
    printf("OpenMP will use up to %d threads.\n", num_threads);
    return 0;
}