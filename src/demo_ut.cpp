#include <catch2/catch.hpp>
#include "library.hpp"

TEST_CASE("Prove that tests are running") {
    REQUIRE("Hello, World!" == hello());
}
