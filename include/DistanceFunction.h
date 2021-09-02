#ifndef __DistanceFunction_H
#define __DistanceFunction_H

#include <cmath>
#include <cstdlib>

template <class ObjectType>
class DistanceFunction{

    protected:
        u_int32_t distCount;

    public:

        DistanceFunction(u_int32_t d = 0){
            distCount = d;
        }

        virtual ~DistanceFunction(){
        }

        virtual double GetDistance(ObjectType & obj1, ObjectType & obj2) = 0;

        virtual double getDistance(ObjectType & obj1, ObjectType & obj2) = 0;

        DistanceFunction& operator=(const DistanceFunction& evaluator){

            distCount = evaluator.getDistanceCount();
            return *this;
        }
      
        void ResetStatistics(){

            resetStatistics();
        }

        void resetStatistics(){

            distCount = 0;
        }

        u_int32_t GetDistanceCount() {

            return getDistanceCount();
        }

        u_int32_t getDistanceCount() {
            return distCount;
        }

        void UpdateDistanceCount(){

            updateDistanceCount();
        }

        void updateDistanceCount(){

            distCount++;
        }

   
};//end DistanceFunction
#endif //__DistanceFunction_H
