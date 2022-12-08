/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:29:41 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/08 23:30:38 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    while (1)
    {
        int t[8];
        int i = 0;
        int max = 0;

        while (i < 8)
        {
            scanf("%d", &t[i]);
            if (t[max] < t[i])
                max = i;
            i++;
        }
        printf("%d\n", max);
    }
    return (0);
}
