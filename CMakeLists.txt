# CMakeList.txt: проект CMake для template; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.10)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("practice")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (${PROJECT_NAME} "main.cpp" "includes/inc_class.h")

# Проверка на соотвествие поддержки версии cmake и поддержка компилятором стандрата языка
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
