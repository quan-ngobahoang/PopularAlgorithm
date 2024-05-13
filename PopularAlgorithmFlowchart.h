#ifndef POPULAR_ALGORITHM_FLOWCHART
#define POPULAR_ALGORITHM_FLOWCHART
#include <cmath>

class PopularAlgorithmFlowChart
{
public:
    template <typename T>
    static int SumOfPositiveIntegerFromOne(T number)
    {
        static_assert(std::is_integral<T>::value, "Param must be an integer type");

        int temp = 1;
        long long result = 0;
        while (temp < number)
        {
            result += temp;
            temp++;
        }
        return result;
    }

    template <typename T>
    static int SumPowerOfTwoFromOne(T number)
    {
        static_assert(std::is_integral<T>::value, "Param mus be an integer type");

        int temp = 1;
        long long result = 0;
        while (temp < number)
        {
            result += pow(temp, 2);
            temp++;
        }
        return result;
    }

    template <typename T>
    static double SumOfDenominatorDecreasesFromOne(T number)
    {
        static_assert(std::is_integral<T>::value, "Param must be an integer type");

        int temp = 1;
        double result = 0;

        while (temp < number)
        {
            result += 1.0 / temp;
            temp++;
        }
        return result;
    }
};

#endif