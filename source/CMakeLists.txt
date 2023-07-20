
add_library(${StarterLibraryName} STATIC)
target_sources(${StarterLibraryName} PUBLIC app.cpp define.cpp)

include(Dependencies)