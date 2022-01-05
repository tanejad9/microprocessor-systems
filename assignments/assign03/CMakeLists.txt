# Specify the name of the executable.
add_executable(assign03)

# Specify the source files to be compiled.
target_sources(assign03 PRIVATE assign03.c assign03.S)

# Pull in commonly used features.
target_link_libraries(assign03 PRIVATE pico_stdlib)

# Create map/bin/hex file etc.
pico_add_extra_outputs(assign03)

# Add the URL via pico_set_program_url.
apps_auto_set_url(assign03)
