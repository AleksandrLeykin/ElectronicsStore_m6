cmake_minimum_required(VERSION 3.26.3 FATAL_ERROR)

set(PROJECT_NAME ElectronicsStore)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
		src/main.cpp 
		src/electricalEquipment.h
		src/monitor.cpp 
		src/monitor.h 
		src/systemUnit.cpp 
		src/systemUnit.h
		src/monitorBrand.cpp 
		src/monitorBrand.h
		src/systemUnBrand.cpp 
		src/systemUnBrand.h
		src/laptop.cpp 
		src/laptop.h)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                    COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/res $<TARGET_FILE_DIR:${PROJECT_NAME}>/res)