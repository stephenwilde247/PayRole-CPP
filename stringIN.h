/* 
 * File:   stringIN.h
 * Author: stephen
 *
 * Created on 2 August 2022, 20:11
 */

#ifndef STRINGIN_H
#define STRINGIN_H

//String Class
class stringInputs{
    public: 
        void setString(std::string x)
        {
            name = x;
        }
        std::string getString()
        {
            return name;
        }  
private:
    std::string name;
};

#endif /* STRINGIN_H */

