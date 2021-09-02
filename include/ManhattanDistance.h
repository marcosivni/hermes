#ifndef MANHATTANDISTANCE_H
#define MANHATTANDISTANCE_H

#include "DistanceFunction.h"
#include <cmath>
#include <stdexcept>

template <class ObjectType>
class ManhattanDistance : public DistanceFunction<ObjectType> {

    public:
        ManhattanDistance();
        ~ManhattanDistance();

        double GetDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
        double getDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
};


#include "ManhattanDistance-inl.h"
#endif // MANHATTANDISTANCE_H
