#include <stdio.h>
#include <stdint.h>

void count_threshold_elements(float *array,
                            uint32_t length,
                            float threshold,
                            uint32_t *num_below,
                            uint32_t *num_above)
{
    if (array == NULL || length == 0)
    {
        return;
    }
    for (uint32_t i = 0; i < length; i++)
    {
        if (array[i] < threshold)
        {
            *num_below += 1;
            // or (*num_below)++
        }
        else if (array[i] > threshold)
        {
            *num_above += 1;
        }
    }
}

int main()
{
    float vec[6] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

    float threshold = 2.0f;
    uint32_t num_below = 0u;
    uint32_t num_above = 0u;

    count_threshold_elements(vec, 6, threshold, &num_below, &num_above);

    printf("Threshold is: %f\n", threshold);
    printf("Num Below: %u\n", num_below);
    printf("Num Above: %u\n", num_above);

    return 0;
}
