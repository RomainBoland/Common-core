/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <rboland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:32:11 by rboland           #+#    #+#             */
/*   Updated: 2024/11/05 17:01:51 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char *stash;
    char        *buf[BUFFER_SIZE + 1];
    char        *result;

    read(fd, *buf, BUFFER_SIZE);
    
    /*read fd files and put it into buffer
    ft_strjoin de buffer vers stash
    

    if stash contain a '\0' or a '\n' 
        means we reached the end of the file or the end of the line
        if it is the end, result = stash
        else then its \n, we send stash from 0 to <=\n
        malloc result on len 0 to <=\n +1
        add '\0' at the end

        we clean the stash from 0 to <=\n

    else

    */
}
