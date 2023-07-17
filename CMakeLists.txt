cmake_minimum_required(VERSION 3.20)

project(BasicConsoleStarter)

# Setting some variables
set(OCP_DIR $ENV{HOME}"/ocp/sdk/latest/cmake")
option(ENABLE_TEST "Enable testing" ON)
set(StarterName Starter)
set(LifeCycleName base_console)




set(StarterLibraryName ${StarterName}Lib)
find_package(OCP) # this provides the variaable OCP_ROOT

if(ENABLE_TEST)
  include(CTest)
endif()

add_library(${StarterLibraryName} STATIC)
target_sources(${StarterLibraryName} PUBLIC app.cpp define.cpp)
target_link_libraries(${StarterLibraryName} PUBLIC OCP::Interface )


add_subdirectory(${OCP_ROOT}/framework/lifecycle/${LifeCycleName}
                    ${PROJECT_BINARY_DIR}/${StarterName})