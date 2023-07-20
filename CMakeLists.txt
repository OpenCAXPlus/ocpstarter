cmake_minimum_required(VERSION 3.20)

project(OCPStarterTemplate)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/source)

# Setting some variables
set(OCP_DIR $ENV{HOME}/ocp/sdk/latest/lib/cmake/ocp)
# set(OCP_DIR "../out/install/linux-gnu-Debug/lib/cmake/ocp")
option(ENABLE_TEST "Enable testing" ON)

include(DefineUser)

set(StarterLibraryName ${StarterName}Lib)
find_package(OCP) # this provides the variaable OCP_ROOT

# set(ocp_interface_DIR ${OCP_DIR})
# find_package(ocp_interface)
if(ENABLE_TEST)
  include(CTest)
endif()

add_subdirectory(source)


add_subdirectory(${OCP_LIFECYCLE}/${LifeCycleName}
  ${PROJECT_BINARY_DIR}/${StarterName})
target_link_libraries(${StarterName} PUBLIC ${StarterLibraryName})