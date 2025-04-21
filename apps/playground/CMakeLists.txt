add_executable(playground playground.cc)

target_link_libraries(playground PRIVATE fmt::fmt loguru::loguru)
