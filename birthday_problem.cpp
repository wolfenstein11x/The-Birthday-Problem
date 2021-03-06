// birthday_problem.cpp : Find the probability that at leat 2 people in a room of n people have the same birthday.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	while (true) {
		int n;
		std::cout << "\nEnter the number of people in a room: \n(Please note that you must enter only digits, or you will get bad results.)\n";
		std::cin >> n;

		double not_prob = 1.0;
		for (int i = 1; i < n; i++) {
			not_prob *= (366.0 - i) / (366.0);
		}
		double prob = 1.0 - not_prob;
		double prob_percent = prob * 100.0;

		std::cout << std::setprecision(2) << std::fixed << std::showpoint;

		if (n < 99) {
			std::cout << "\nIn a room of " << n << " people, there is a " << prob_percent << " percent chance that at least 2 people in the room have the same birthday.\n";
		}
		else if (n >= 99 && n < 365) {
			std::cout << "In a room of " << n << " people, there is a 99.99 percent chance that at least 2 people in the room have the same birthday.\n";
		}
		else if (n == 365) {
			std::cout << "In a room of " << n << " people, there is a 99.99 percent chance that at least 2 people in the room have the same birthday.\n";
			std::cout << "(Remember, with leap year, February 29th, there are 366 possible birthdays.)\n";
		}
		else {
			std::cout << "In a room of " << n << " people, there is a 100 percent chance that at least 2 people have the same birthday.\n";
		}
		
		char y_or_n;
		std::cout << "\nDo another one? (Y/N)";
		std::cin >> y_or_n;
		if (toupper(y_or_n) == 'N') {
			break;
		}
	}

	return 0;
}

