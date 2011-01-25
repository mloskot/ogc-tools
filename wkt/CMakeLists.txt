set(WKT_TOOLS wkt_parser)

foreach(TOOL ${WKT_TOOLS})
  message(STATUS "Configuring ${TOOL}")
  add_executable(${TOOL} ${TOOL}.cpp)
  target_link_libraries(${TOOL})
endforeach()
