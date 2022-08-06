/* 
 * File:   durationSelector.cpp
 * Author: stephen
 *
 * Created on 3 August 2022, 01:27
 */

#include <cstdlib>
#include "includes.h"
#include "stringIN.h"
#include "defines.h"
#include "globals.h"

bool emergancyTax;


void tcSelection()
{
    int selectionTC;
    std::cout << "Please make a selection TaxCode\n 1250l (1)\n";
    std::cin >> selectionTC; 
    
    switch(selectionTC){
        case 1:
            tc = lTaxCode;
            payFrequency();
            break;   
            
        case 0:
            bool emergancyTax = true;
            tc = emergencyTC;
            weeklyET();
            break;
    }
}


void payFrequency()
{
    int paySelection;
    std::cout << "How is " << name << " paid \n(1) Weekly\n(2) Monthly";
    std::cin >> paySelection;
    
    switch (paySelection)
    {
        case 1:
            weekly();
            break;
        case 2 :
            monthly();
            break;
    }
    
}

