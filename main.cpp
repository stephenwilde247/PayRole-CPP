/* 
 * File:   main.cpp
 * Author: stephen
 *
 * Created on 2 August 2022, 19:54
 */

#include "includes.h"
#include "stringIN.h"
#include "defines.h"
#include "globals.h"

std::string name;
long double tc;
long double taxAmount;

void employeeName()
{
    stringInputs inputs;
    std::cout << "Enter Employee name" << std::endl;
    getline(std::cin, name);
    inputs.setString(name);
    std::cout << inputs.getString() << std::endl;
    name = inputs.getString();
}

void taxCode()
{
    stringInputs taxCode;
    std::cout << "Enter tax code";
}

int main()
{
    employeeName();
    tcSelection();
}
