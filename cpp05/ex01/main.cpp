
#include "Bureaucrat.hpp"


void test(const std::string& name, int grade)
{
    try
    {
        Bureaucrat kotaro(name, grade);
        std::cout << kotaro << std::endl;
        std::cout << "Increment grade" << std::endl;
        kotaro.incrementGrade();
        std::cout << kotaro << std::endl;
        std::cout << "Decrement grade" << std::endl;
        kotaro.decrementGrade();
        std::cout << kotaro << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}




int main()
{
    // test("Kotaro", 40);

    // test("Kirby",151);

    // test("waddle dee", 0);
    return 0;
}