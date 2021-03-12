#ifndef SQUAD_HPP
#define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad{
private:
    int _quantity;
    ISpaceMarine **_array;
public:
    Squad();
    Squad(const Squad & other);
    virtual ~Squad();
    Squad& operator=(const Squad &other);

    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int) const;
    virtual int push(ISpaceMarine*);
};


#endif
