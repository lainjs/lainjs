file(GLOB_RECURSE SOURCE_FILES *.cpp *.h)

set(SOURCE_FILES ${SOURCE_FILES})

add_executable(lainjs ${SOURCE_FILES})

