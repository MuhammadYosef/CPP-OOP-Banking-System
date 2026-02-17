#pragma once

#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"
#include <iomanip>


class clsUpdateCurrencyScreen : clsScreen
{
private:

	static void _PrintCurrency(clsCurrency Currency)
	{
		cout << "\nCurrency Card:\n";
		cout << "_____________________________\n";
		cout << "\nCountry    : " << Currency.Country();
		cout << "\nCode       : " << Currency.CurrencyCode();
		cout << "\nName       : " << Currency.CurrencyName();
		cout << "\nRate(1$) = : " << Currency.Rate();

		cout << "\n_____________________________\n";

	}


	static void _UpdateCurrencyRate(clsCurrency& Currency)
	{
		cout << "Are you sure you want to update the rate of this Currency y/n ?";
		char Answer = 'n';
		cin >> Answer;

		if (tolower(Answer) == 'y')
		{
			cout << "Update Currency Rate: \n";
			cout << "_____________________\n";
			cout << "Enter New Rate: ";
			float NewRate = 0;
			cin >> NewRate;

			Currency.UpdateRate(NewRate);

			cout << "Curreny Rate Updated Successfully.\n";

			_PrintCurrency(Currency);
		}
	}


public:

	static void ShowUpdateCurrencyScreen()
	{
		system("cls");
		_DrawScreenHeader("\tUpdate Currency Screen");

		cout << "Please enter currency code: \n";
		string CurrencyCode = clsInputValidate::ReadString();

		clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
		 
		_PrintCurrency(Currency);

		_UpdateCurrencyRate(Currency);
	}
};

