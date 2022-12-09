/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:44:49 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/09 19:41:47 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string convert_to_bin(int n)
{
	string bin = "";

	while (n != 0 && (bin.length() < 7))
	{
		char c = ((n % 2) + '0');
		bin =  c + bin;
		n /= 2;
	}
    while (bin.length() < 7)
        bin = '0' + bin;
	return (bin);
}


string solve(string c)
{	
    string out = "";

    int i = 0;
    while(i < c.length())
	{
        char tmp = c[i], len = 0;

        while (tmp == c[i])
        {
            len++;
            i++;
        }
        if (tmp == '0')
            out += "00 ";
        else
            out += "0 ";
        for (int k = 0; k < len; k++)
            out += "0";
        if (c[i] != '\0')
            out += " ";
    }
    return out;
}

int main()
{
    string s; getline(cin, s);;

    string t = "";
    for (int i = 0; i < s.length(); i++)
        t += convert_to_bin(s[i]);

    cout << solve(t) << endl;
}
