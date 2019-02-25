#include <stdio.h>

int main(void)
{
    int masiv[99] = {13000, 4500, 3600, 3150, 270, 2250, 1814, 1680, 1423, 1350,
        1181,1109,1036,  960, 900, 815,780, 745, 710, 675,
        640, 600, 579, 560, 535, 519, 500, 480, 459, 446,
        434, 420, 409, 402, 393, 383, 374, 363, 355, 345,
        337, 327, 318, 313, 300, 293, 287, 281, 273, 268,
        263, 259, 254, 250, 245, 241, 236, 230, 228, 223,
        221, 217, 214, 209, 205, 202, 200, 198, 196, 192,
        190, 187, 185, 182, 179, 176, 175, 173, 171, 169,
        167, 165, 163, 160, 159, 157, 155, 153, 152, 150,
        148, 146, 145, 143, 142, 141, 139, 137, 136};

    printf("uint16_t arr_counter_ramp[99] = \n{\n\t");
    for (int i = 0, n = sizeof(masiv) / sizeof(int); i < n; i++) // Mult 2
    {
        if (i == n - 1)
        {
            printf("%i", masiv[i] * 2);
        }
        else
        {
            printf("%i, ", masiv[i] * 2);
        }
        if ((i + 1) % 8 == 0)
            printf("\n\t");
    }
    printf("\n};\n\n");

    printf("uint16_t arr_counter_sin[99] = \n{\n\t");
    for (int i = 0, n = sizeof(masiv) / sizeof(int); i < n; i++) // Mult 3
    {
        if (i == n - 1)
        {
            printf("%i", masiv[i] * 3);
        }
        else
        {
            printf("%i, ", masiv[i] * 3);
        }
        if ((i + 1) % 8 == 0)
            printf("\n\t");
    }
    printf("\n};\n\n");
}