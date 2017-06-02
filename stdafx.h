#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "API.h"

#if defined(_MSC_VER)
    #define callback __declspec(dllexport)
#elif defined(__GNUC__)
    #define callback __attribute__((visibility("default")))
#else
    #define callback
    #pragma error Unknown dynamic link import/export semantics.
#endif
