INCLUDE_DIRECTORIES(${gtest_SOURCE_DIR}
                    ${gtest_SOURCE_DIR}/include
                    ${PROJECT_SOURCE_DIR}/src)

ADD_EXECUTABLE(test_linked_list
               linked_list_test_main.cc
               linked_list_test_unittests.cc)

target_link_libraries(test_linked_list gtest s_linked_list)

add_test(NAME unittest_linked_list
         COMMAND ${PROJECT_BINARY_DIR}/bin/test_linked_list)
