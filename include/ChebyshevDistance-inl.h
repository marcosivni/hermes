template <class ObjectType>
ChebyshevDistance<ObjectType>::ChebyshevDistance(){
}

template <class ObjectType>
ChebyshevDistance<ObjectType>::~ChebyshevDistance(){
}

template <class ObjectType>
double ChebyshevDistance<ObjectType>::GetDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error){

    return getDistance(obj1, obj2);
}

template <class ObjectType>
double ChebyshevDistance<ObjectType>::getDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error){

    if (obj1.size() != obj2.size())
        throw std::length_error("The feature vectors do not have the same size.");

    double d = 0;
    double tmp;

    for (size_t i = 0; i < obj1.size(); i++){
        tmp = fabs(obj1[i] - obj2[i]);
        if (tmp > d){
            d = tmp;
        }
    }

    // Statistic support
    this->updateDistanceCount();

    return d;
}
