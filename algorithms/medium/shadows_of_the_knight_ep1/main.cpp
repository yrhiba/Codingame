/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:27:34 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/29 05:30:47 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_there(char c, string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (c == s[i])
            return (true);
    }
    return (false);
}

int main()
{
    int w, h;   
    cin >> w >> h; cin.ignore();

    int start_x = 0;
    int end_x   = w - 1;
    
    int start_y = 0;
    int end_y   = h - 1;

    int n;
    cin >> n; cin.ignore();
    
    int x0, y0;
    cin >> x0 >> y0; cin.ignore();

    int r = 0;

    while (1) {
        //
        string dir;
        cin >> dir; cin.ignore();

        if (is_there('U', dir))
        {
            end_y = y0 - 1;
            y0 = start_y + ((end_y - start_y) / 2);
        }
        else if (is_there('D', dir))
        {
            start_y = y0 + 1;
            y0 = start_y + ((end_y - start_y) / 2);
        }

        if (is_there('R', dir))
        {
            start_x = x0 + 1;
            x0 = start_x + ((end_x - start_x) / 2);
        }
        else if (is_there('L', dir))
        {
            end_x = x0 - 1;
            x0 = start_x + ((end_x - start_x) / 2);
        }

        cout  << x0 << " " << y0 << endl;
    }
}
