#ifndef EUCLIDEANDISTANCE_H
#define EUCLIDEANDISTANCE_H

#include "DistanceFunction.h"
#include <cmath>
#include <stdexcept>

template <class ObjectType>
class EuclideanDistance : public DistanceFunction <ObjectType>{

    public:

        EuclideanDistance();
        virtual ~EuclideanDistance();

        double GetDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
        double getDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
};

#include "EuclideanDistance-inl.h"
#endif // EUCLIDEANDISTANCE_H
