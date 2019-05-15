add_library(fridge "" database.cpp database.h)

target_sources(
        fridge
        PRIVATE
        example.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/example.h
)

target_include_directories(
        fridge
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)