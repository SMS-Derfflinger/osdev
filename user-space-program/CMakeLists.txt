cmake_minimum_required(VERSION 3.15)
project(user_space_program C ASM)

set(CMAKE_C_FLAGS "-nostdlib -nostdinc -m32 -static -W -Wall -mstack-protector-guard=global")
set(CMAKE_ASM_FLAGS "-nostdlib -static -m32 -mstack-protector-guard=global")

link_libraries(gblibc_32 crt0_32)
add_link_options("LINKER:-melf_i386")

set(CMAKE_C_IMPLICIT_LINK_DIRECTORIES "")
set(CMAKE_C_IMPLICIT_LINK_LIBRARIES "")

add_executable(hello-world.out hello-world.s)
add_executable(interrupt-test.out interrupt-test.s)
add_executable(stack-test.out stack-test.s)
add_executable(init.out init.c)
add_executable(priv-test.out priv-test.c)

add_custom_target(user_space_programs
    DEPENDS hello-world.out interrupt-test.out stack-test.out init.out priv-test.out
)
