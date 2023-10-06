#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: param of width
 * @height: param for height
 * Return: value to 2 places
 */
int **alloc_grid(int width, int height)
{
        int **value;
        int w, h;

        if (width <= 0 || height <= 0)
                return (NULL);

        value = malloc(sizeof(int *) * height);

        if (value == NULL)
                return (NULL);

        for (w = 0; w < height; w++)
        {
                value[w] = malloc(sizeof(int) * width);

                if (value[w] == NULL)
                {
                        for (; w >= 0; w--)
                                free(value[w]);

                        free(value);
                        return (NULL);
                }
        }

        for (w = 0; w < height; w++)
        {
                for (h = 0; h < width; h++)
                        value[w][h] = 0;
        }

        return (value);
}
