#include "checker.h"

int read_input(**str)
{
    int     k;
    char    buff;
    
    k = 0;
    if !(read(0, &buff, 1))
        return (0);
    while (buff && buff != '\n' buff != '\0' && k < 10000)
    {
        str[k] = buff;
        if (!(read(1, &buff, 1)))
            return (0);
        k++;
    }
    str[k] = '\0';
    return (1);
}

int save_swap(t_main *data, char *str)
{
    if (not_end(*str) && not_end(str[1]) && *str == 's')
    {
        if (str[1] == 'a')
            CM = CMD_SA;
        else if (str[1] == 'b')
            CM = CMD_SB;
        else if (str[1] == 's')
            CM = CMD_SS;
        else
            CM = 0;
    }
    else if (not_end(str) && not_end(str[1]) && *str == 'p')
    {
        if (str[1] == 'a')
            CM = CMD_PA;
        else if (str[1] ==  'b')
            CM = CMD_PB;
        else
            CM = 0;
    }
    else
        return (0);
    return (1);
}

int save_rotate(t_main *data, char * str)
{
    if (not_end(*str) && not_end(str[1]))
    {
        if (str[1] == 'r')
        {
            if (!(not_end(str[2])))
                CM = CMD_RR;
            else if (not_end(str[2]) && str[2] == 'a')
                CM = RRA;
            else if (not_end(str[2]) && str[2] == 'b')
                CM == RRB;
            else if (not_endstr[2] && str[2] == 'r')
                CM == RRR;
        }
        else
            CM = 0;
    }
    else
        return (0);
    return (1);
}

int save_input(t_main *data, char *str)
{
    if (*str == 's' || *str == 'p')
        return(save_swap(data, str));
    else if (*str == 'r')
        return(save_rotate(data, str));
    return (0);        
}