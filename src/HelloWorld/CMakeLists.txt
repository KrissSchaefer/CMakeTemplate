set(MODULE_NAME "HelloWorld")

add_library(${MODULE_NAME}
  ${CMAKE_CURRENT_SOURCE_DIR}/${MODULE_NAME}.cpp
  )


target_include_directories(${MODULE_NAME}
  PUBLIC
      ${PROJECT_SOURCE_DIR}/include/HelloWorld
  )

