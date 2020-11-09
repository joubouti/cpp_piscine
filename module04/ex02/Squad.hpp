#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include <string>


class Squad : public ISquad {
private:
    struct	s_list
    {
        ISpaceMarine*   unit;
        struct s_list*  next;
    };

    typedef struct s_list t_list;

    t_list*         _units;
    int				_count;

    void    clear();
public:
    Squad();
    Squad(Squad const &);
    ~Squad();

    Squad&          operator=(Squad const &);

    int             getCount() const;
    ISpaceMarine*   getUnit(int) const;
    int             push(ISpaceMarine*);

};




#endif