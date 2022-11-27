

#include <iostream>
#include <vector>


class FractionParent
{
private:
    float Denominator;
    float Numerator;

public:
    FractionParent(float _denominator, float _numerator)
    {
        if (_denominator == 0)
            throw std::runtime_error("Instance of class Fraction was not created! Denominator cannot be equal to zero!");
        else
        {
            Denominator = _denominator;
            Numerator = _numerator;
        }
    };

    float GetDenominator() const
    {
        return Denominator;
    }

    float GetNumerator() const
    {
        return Numerator;
    }

};


class Fraction : public FractionParent
{
public:
    Fraction(float _denominator, float _numerator) try : FractionParent(_denominator, _numerator)
    {

    }
    catch (...)
    {
        throw;
    }
};


int main()
{
    float Denomination;
    float Numerator;
    try
    {
        std::cout << "Please input params for creation instance of class Fraction" << std::endl;
        std::cout << "Denomination = ";
        std::cin >> Denomination;
        std::cout << "Numerator = ";
        std::cin >> Numerator;

        Fraction fraction(Denomination, Numerator);
        std::cout << "Instance of class Fraction was created!" << std::endl;
        std::cout << "Denomination-" << fraction.GetDenominator() << std::endl;
        std::cout << "Numerator-" << fraction.GetNumerator() << std::endl;
    }
    catch (std::exception& exception)
    {
        std::cout << exception.what();
    }

};
