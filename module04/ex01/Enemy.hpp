#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy {
private:
    int         _hp;
    std::string _type;
    Enemy();
public:
    Enemy(Enemy const &);
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();

    Enemy&              operator=(Enemy const &);

    std::string const & getType() const;
    int                 getHP() const;
    virtual void        takeDamage(int);
};

#endif