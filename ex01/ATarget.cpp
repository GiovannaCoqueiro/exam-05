#include "ATarget.hpp"

ATarget::ATarget(std::string type) {
    _type = type;
}

ATarget::ATarget(const ATarget &rhs) {
    *this = rhs;
}

ATarget& ATarget::operator=(const ATarget &rhs) {
    _type = rhs._type;
    return *this;
}

ATarget::~ATarget() {}

std::string ATarget::getType() const {
    return _type;
}

void ATarget::getHitBySpell(const ASpell &spell) const {
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
