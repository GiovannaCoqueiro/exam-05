#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string name, std::string title) {
    _name = name;
    _title = title;
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << _name << ": My job here is done!" << std::endl;
    for (std::map<std::string, ASpell*>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); it++) {
        delete it->second;
    }
    _SpellBook.clear();
}

std::string Warlock::getName() const {
    return _name;
}

std::string Warlock::getTitle() const {
    return _title;
}

void Warlock::setTitle(const std::string &title) {
    _title = title;
}

void Warlock::introduce() const {
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    if (spell)
        if (_SpellBook.find(spell->getName()) == _SpellBook.end())
            _SpellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spellname) {
    if (_SpellBook.find(spellname) != _SpellBook.end()) {
            delete _SpellBook[spellname];
            _SpellBook.erase(_SpellBook.find(spellname));
    }
}

void Warlock::launchSpell(std::string spellname, const ATarget &target) {
    if (_SpellBook.find(spellname) != _SpellBook.end())
        _SpellBook[spellname]->launch(target);
}