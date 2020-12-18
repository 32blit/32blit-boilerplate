# Basic parameters; check that these match your project / environment
cmake_minimum_required(VERSION 3.8)

project(game)
set(32BLIT_PATH "../" CACHE PATH "Path to 32blit.cmake")
set(PROJECT_SOURCE game.cpp game.hpp)
set(PROJECT_DISTRIBS LICENSE README.md)

# Build configuration; approach this with caution!
if(NOT EXISTS ${32BLIT_PATH}/32blit.cmake)
  message(FATAL_ERROR "Define location of 32Blit API with -D32BLIT_PATH=<path to 32blit.cmake>")
endif()
include (${32BLIT_PATH}/32blit.cmake)
install (FILES ${PROJECT_DISTRIBS} DESTINATION .)
blit_executable (${PROJECT_NAME} ${PROJECT_SOURCE})
blit_assets_yaml (${PROJECT_NAME} assets.yml)
blit_metadata (${PROJECT_NAME} metadata.yml)

