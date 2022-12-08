/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:20:31 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/08 23:20:40 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    
    vector <int> enterd;
    for (int i = 0; i < n; i++) {
        int pi; cin >> pi; cin.ignore();
        enterd.push_back(pi);
    }

    sort(enterd.begin(), enterd.end());

    int result, tmp;
    for (int i = 0; i < enterd.size(); i++)
    {
        if (i == 1)
            result = abs(enterd[i - 1] - enterd[i]);
        else
        {
            tmp = abs(enterd[i - 1] - enterd[i]);
            if (result > tmp)
                result = tmp;
        }
    }
    
    cout << result << endl;
}
