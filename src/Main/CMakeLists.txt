set(MODULE_NAME "Main")

add_executable(${MODULE_NAME}
  ${CMAKE_CURRENT_SOURCE_DIR}/${MODULE_NAME}.cpp
  )

target_link_libraries(${MODULE_NAME}
  PUBLIC
    HelloWorld
  )

