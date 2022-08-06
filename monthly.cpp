/* 
 * File:   monthly.cpp
 * Author: stephen
 *
 * Created on 2 August 2022, 20:58
 */

#include <cstdlib>
#include "globals.h"
#include "defines.h"
#include "includes.h"

void monthly()
{
    long double earnings;
    long double earningsYear;
    long double earningsTotal;
    
    std::cout << "How much did "<< name << " earn this year so far: ";
    std::cin >> earningsYear;
    
    std::cout << "How much did "<< name << " earn this month: ";
    
    std::cin >> earnings;
    
    earningsTotal = earnings + earningsYear;
    
    if (earningsTotal <= 12.570f)
    {
        std::cout << name << " Has not reached the personal tax allowance threshold \n" <<
                "Pay this week is: " << earnings << "\nTax = 0%";
    }
    else {
        long double netPay = earnings;
        long double tax = earnings * tc / 100.0f;
        long double grossPay = earnings - tax;

        std::cout << name << " has earned " << earnings << "\n Tax amount for this employee is set to " << tc << 
                "\n Net pay £" << netPay << "\n Total Taxed £" << tax << 
                "\n Total take home after tax £" << grossPay;
    }
}