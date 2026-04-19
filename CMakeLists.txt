
#Aaozbillahi minashaetaun nirajeem
#Bismillah hirahman nirahim
cmake_minimum_required(VERSION 3.21) # Changed from 3.10 to support the DLL copy command
project(MySFMLGame)

# Find SFML
find_package(SFML 2.5 COMPONENTS graphics window system audio REQUIRED)

add_executable(MyGame Bismillah_Hirahman_Nirahim_main.cpp Bismillah_Hirahman_Nirahim_Common_Header.h Bismillah_Hirahman_Nirahim_Entity_Structure_Function_Implementation.cpp Bismillah_Hirahman_Nirahim_Entity_Structure.h)

# Link the libraries
target_link_libraries(MyGame sfml-graphics sfml-window sfml-system sfml-audio)

# The "Life-Saver" DLL Copy Block
if(WIN32)
    add_custom_command(TARGET MyGame POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_RUNTIME_DLLS:MyGame>
        $<TARGET_FILE_DIR:MyGame>
        COMMAND_EXPAND_LISTS
    )
endif()