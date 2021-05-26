set(MODULE_NAME "HelloWorld")


add_executable(${MODULE_NAME}-Test
  ${MODULE_NAME}Test.cpp
  )

target_link_libraries(${MODULE_NAME}-Test
  PRIVATE
    HelloWorld
    # external libraries
    gtest
    gmock_main
)
