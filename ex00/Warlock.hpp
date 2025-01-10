#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock {
    private:
        std::string _name;
        std::string _title;
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

};

#endif



































#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock {
    private:
        std::string _name;
        std::string _title;
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

};

#endif