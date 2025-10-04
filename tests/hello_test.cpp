#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "hello_test" ) {
    REQUIRE( strcmp_case_insensitive("String one","string two") == -1 );
    REQUIRE( strcmp_case_insensitive("String one","string one") == 0 );
    REQUIRE( strcmp_case_insensitive("String Two","string one") == 1 );
    REQUIRE(strcmp_case_insensitive("abc", "abd") < 0);
    REQUIRE(strcmp_case_insensitive("caterpillar", "cat") > 0);
}
