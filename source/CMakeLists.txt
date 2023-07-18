find_package(OCP) # this provides the variaable OCP_ROOT

add_library(${StarterLibraryName} STATIC)
target_sources(${StarterLibraryName} PUBLIC app.cpp define.cpp)
target_link_libraries(${StarterLibraryName} PUBLIC OCP::Interface )
message(STATUS ${OCP_LIFECYCLE}/${LifeCycleName})
target_include_directories(${StarterLibraryName} PUBLIC ${OCP_LIFECYCLE}/${LifeCycleName})