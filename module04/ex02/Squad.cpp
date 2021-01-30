#include "Squad.hpp"


Squad::Squad() : _units(NULL), _count(0)
{
}

Squad::Squad(Squad const & squad) {
    *this = squad;
}

Squad::~Squad() {
    clear();
}


Squad&          Squad::operator=(Squad const & squad) {
    clear();
    if (squad._units)
        _units = new t_list;
    _count = squad._count;
    t_list  *iter = squad._units;
    t_list  *tmp = _units;
    while (iter) {
        if (iter != squad._units) {
            tmp->next = new t_list;
            tmp = tmp->next;
        }
        tmp->unit = iter->unit->clone();
        tmp->next = NULL;
        iter = iter->next;
    }
    return *this;
}

int             Squad::getCount() const {
    return _count;
}

ISpaceMarine*   Squad::getUnit(int index) const {
    if (index < _count) {
        t_list* item = _units;
        for (int i = 0; i < _count; i++) {
            if (i == index) 
                return item->unit;
            item = item->next;
        }
    }
    return NULL;
}

int             Squad::push(ISpaceMarine* spaceMarine) {
    if (spaceMarine == NULL)
        return _count;
    
    if (_count == 0) {
        _units = new t_list;
        _units->unit = spaceMarine;
        _units->next = NULL;
    } else {
        t_list* item = _units;

        if (item->unit == spaceMarine)
                return _count;
        while (item->next) {
            item = item->next;
            if (item->unit == spaceMarine)
                return _count;
        }
        item->next = new t_list;
        item->next->unit = spaceMarine;
        item->next->next = NULL;
    }
    return (++_count);
}

void    Squad::clear() {
    t_list* nextUnit;

    while (_units != NULL) {
        nextUnit = _units->next;
        if (_units->unit != NULL)
            delete _units->unit;
        delete _units;
        _units = nextUnit;
    }
}
