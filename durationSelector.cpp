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


void tcSelection()
{
    int selectionTC;
    std::cout << "Please make a selection TaxCode\n 1250l (1)\n";
    std::cin >> selectionTC; 
    
    switch(selectionTC){
        case 1:
            tc = lTaxCode;
            payFrequency();
    }
}


void payFrequency()
{
    int paySelection;
    std::cout << "How is " << name << " paid \n(1) Weekly\n";
    std::cin >> paySelection;
    
    switch (paySelection)
    {
        case 1:
            weekly();
            break;
    }
    
}

