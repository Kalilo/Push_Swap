#include "checker.h"

int     save_args(t_main *data, int argv, char **argc)
{
    int     k;
    
    k = 1;
    if ((data->list_a.list = (int **)malloc(sizeof(int) * 10010)) == NULL)
        return (0);
    if ((data->list_b.list = (int **)malloc(sizeof(int) * 10010)) == NULL)
        return (0);
    data->command = 0;
    while (k < argv)
    {
        *data->list_a.list[k - 1] = ft_atoi(argc[k]);
        k++;
    }
    return (1);
}