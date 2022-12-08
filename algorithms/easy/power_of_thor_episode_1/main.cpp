/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:25:27 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/08 23:26:38 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move.
        cin >> remaining_turns; cin.ignore();

        if (initial_ty < light_y)
        {
            cout << "S";
            initial_ty++;
        }   
        if (initial_ty > light_y)
        {
            cout << "N";
            initial_ty--;
        }
        if (initial_tx < light_x)
        {
            cout << "E";
            initial_tx++;
        }
        if (initial_tx > light_x)
        {
            cout << "W";
            initial_tx--;
        }
        
        cout << endl;
    }
}
