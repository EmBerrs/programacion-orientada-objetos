#include "Recursividad.h"
#include <stdexcept>

long long Recursividad::factorial(int n) const {
    if (n < 0) throw std::runtime_error("Factorial de negativo no definido");
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

long long Recursividad::fibonacci(int n) const {
    if (n < 0) throw std::runtime_error("Fibonacci de negativo no definido");
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
