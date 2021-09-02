#ifndef CHEBYSHEVDISTANCE_H
#define CHEBYSHEVDISTANCE_H

#include "DistanceFunction.h"
#include <cmath>
#include <stdexcept>

template <class ObjectType>
class ChebyshevDistance : public DistanceFunction <ObjectType> {

    public:

        ChebyshevDistance();
        virtual ~ChebyshevDistance();

        double GetDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
        double getDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error);
};


#include "ChebyshevDistance-inl.h"
#endif // CHEBYSHEVDISTANCE_H
