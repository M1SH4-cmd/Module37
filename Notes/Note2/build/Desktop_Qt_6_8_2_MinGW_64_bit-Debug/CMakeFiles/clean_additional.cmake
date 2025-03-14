# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appNote2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appNote2_autogen.dir\\ParseCache.txt"
  "appNote2_autogen"
  )
endif()
