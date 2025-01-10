#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
    private:
        std::string _name;
        std::string _title;
        std::map<std::string, ASpell*> _SpellBook;
        Warlock();
        Warlock(const Warlock &other);
        Warlock& operator=(const Warlock &other);

    public:
        Warlock(std::string name, std::string title);
        ~Warlock();

        std::string getName() const;
        std::string getTitle() const;
        void setTitle(const std::string &title);

        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellname);
        void launchSpell(std::string spellname, const ATarget &target);

};

#endif