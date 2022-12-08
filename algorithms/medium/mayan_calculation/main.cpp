/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:44:19 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/08 22:44:27 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare_mayanums(vector<string> n1, vector<string> n2)
{
	if (n1.size() != n2.size())
		return (false);
	for (int i = 0; i < n1.size(); i++)
	{
		if (n1[i] != n2[i])
			return (false);
	}
	return (true);
}

int redcmi(vector<string> num, vector < vector<string> > &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (compare_mayanums(num, nums[i]))
			return (i);
	}
	return (-1);
}

long long convert_maya_to_int(vector < vector<string> > &num, vector < vector<string> > &nums)
{
	long long result = 0, tmp;

	for (int i = 0; i < num.size(); i++)
	{
		tmp = redcmi(num[i], nums);
		if (tmp == -1)
			break;
		result = result * 20 + tmp;
	}
	return (result);
}

void printmaya(long long num, vector < vector<string> > &nums)
{
	for (int i = 0; i < nums[num].size(); i++)
	{
		cout << nums[num][i] << endl;
	}
}

void print_int_to_maya(long long num, vector < vector<string> > &nums)
{
	if (num < 20)
	{
		printmaya(num, nums);
		return ;
	}

	print_int_to_maya((num / 20), nums);
	print_int_to_maya((num % 20), nums);
}

int main()
{
    int l;
    int h;
    cin >> l >> h;
    
    vector < vector<string> > nums;
	nums.resize(20);


    for (int i = 0; i < h; i++) {
        string numeral;
        cin >> numeral;

        int c = 0, k = 0;
        while (c < numeral.length())
        {
            string tmp = "";
            int j = 0;
            while (numeral[c] && j < l)
            {
                tmp += numeral[c];
                j++;
                c++;
            }
			nums[k++].push_back(tmp);
        }
    }

	int line; cin >> line;
    
	vector < vector<string> > num1;
	num1.resize((line / h));
	
	int digits = 0, i = 0; 
	while (i < line) 
	{
		for (int j = 0; j < h; j++)
		{
			string enterd; cin >> enterd;
			num1[digits].push_back(enterd);
			i++;
		}
        digits++;
	}
	
	cin >> line;
    
	vector < vector<string> > num2;
	num2.resize((line / h));
	
	digits = 0, i = 0;
	while (i < line)
	{
		for (int j = 0; j < h; j++)
		{
			string enterd; cin >> enterd;
			num2[digits].push_back(enterd);
			i++;
		}
        digits++;
	}

	long long number1 = convert_maya_to_int(num1, nums);
	long long number2 = convert_maya_to_int(num2, nums);
	
	string operation; cin >> operation;
	long long output;

	if (operation == "+")
		output = number1 + number2;
	else if (operation == "-")
		output = number1 - number2;
	else if (operation == "*")
		output = number1 * number2;
	else if (operation == "/")
		output = number1 / number2;
	else
	{
		cout << "Invalid operator!\n";
		return (1);
	}
	print_int_to_maya(output, nums);
	return (0);
}
