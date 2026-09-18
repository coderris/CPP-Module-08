#include "Span.hpp"

int main(void)
{
    // Caso básico del enunciado
    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

    // Caso: agregar de más -> debe lanzar excepcion
    try
    {
        sp.addNumber(1000);
        std::cout << "ERROR: no lanzo excepcion" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "OK, excepcion capturada: " << e.what() << std::endl;
    }

    // Caso: span vacio
    Span empty(5);
    try
    {
        empty.shortestSpan();
        std::cout << "ERROR: no lanzo excepcion" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "OK, excepcion capturada: " << e.what() << std::endl;
    }

    // Caso: span con un solo elemento
    Span oneElem(5);
    oneElem.addNumber(42);
    try
    {
        oneElem.longestSpan();
        std::cout << "ERROR: no lanzo excepcion" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "OK, excepcion capturada: " << e.what() << std::endl;
    }

    // Caso: 10000+ numeros aleatorios
    Span big(10000);
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    for (int i = 0; i < 10000; i++)
        big.addNumber(std::rand());
    std::cout << "big shortestSpan: " << big.shortestSpan() << std::endl;
    std::cout << "big longestSpan: " << big.longestSpan() << std::endl;

    return 0;
}