#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    protected:
        std::string _type;

    public:
        ATarget(std::string type);
        ATarget(const ATarget &rhs);
        ATarget& operator=(const ATarget &rhs);
        virtual ~ATarget();

        std::string getType() const;

        virtual ATarget* clone() const = 0;
        void getHitBySpell(const ASpell &spell) const;

};

#endif