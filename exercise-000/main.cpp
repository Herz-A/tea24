#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int main(int argc, char **argv) {

    int x = 10;
    int* ptr = &x;

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
    fmt::print("Wert: {}, Adresse: {}\n", x, fmt::ptr(&x));
    fmt::println("Wert {},Addresse: {}", *ptr, fmt::ptr(&ptr));

    *ptr = 42;

    fmt::println("Neuer Wert: {}", *ptr);

    return 0; /* exit gracefully*/
}
