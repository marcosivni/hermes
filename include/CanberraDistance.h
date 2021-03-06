#ifndef CANBERRADISTANCE_H
#define CANBERRADISTANCE_H

#include "DistanceFunction.h"
#include <cmath>
#include <stdexcept>

template <class ObjectType>
class CanberraDistance : public DistanceFunction <ObjectType>{

    public:

        CanberraDistance();
        virtual ~CanberraDistance();

        double GetDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
        double getDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
};

#include "CanberraDistance-inl.h"
#endif // CANBERRADISTANCE_H
