cmake_minimum_required(VERSION 3.10)

project(PID)

project (PID VERSION 1.0)

set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure(PIDConfig.h.in PIDConfig.h)

add_executable(PID main.cpp)

target_include_directories(PID PUBLIC
	"${PROJECT_BINARY_DIR"
	}
