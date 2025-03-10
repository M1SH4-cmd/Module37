# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Note1_CLion_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Note1_CLion_autogen.dir\\ParseCache.txt"
  "Note1_CLion_autogen"
  )
endif()
