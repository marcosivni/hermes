template <class ObjectType>
CanberraDistance<ObjectType>::CanberraDistance(){
}


template <class ObjectType>
CanberraDistance<ObjectType>::~CanberraDistance(){
}


template <class ObjectType>
double CanberraDistance<ObjectType>::GetDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error){

    return getDistance(obj1, obj2);
}


template <class ObjectType>
double CanberraDistance<ObjectType>::getDistance(ObjectType &obj1, ObjectType &obj2) throw (std::length_error){

    if (obj1.size() != obj2.size())
        throw std::length_error("The feature vectors do not have the same size.");

    double d = 0;
    double tmp;
    double ai, bi, mai, mbi;

    ai = bi = 0.0;

    for (size_t i = 0; i < obj1.size(); i++){

        ai = obj1[i];
        bi = obj2[i];

        mai = sqrt(pow(ai, 2.0));
        mbi = sqrt(pow(bi, 2.0));

        double den = mai+mbi;
        if (den == 0.0){
            den = 1.0;
        }

        tmp = (sqrt(pow((ai - bi), 2.0)))/den;
        d = d + tmp;
    }

    // Statistic support
    this->updateDistanceCount();

    return d;
}

