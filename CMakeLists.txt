cmake_minimum_required(VERSION 3.5)               # cmake_minimum_required(VERSION 3.0.0)               # 최소요구버젼
project(test_cmake VERSION 0.1.0 LANGUAGES C CXX)   # project_name과 project_version

include(CTest)                                      # 단위 Test인 CTest 포함
#enable_testing()                                   # 단위 test 활성화 시킴

add_executable(test_cmake cpp/src/main.cpp cpp/src/Test.cpp)     # build 대상 추가, <실행파일명> <소스파일명> <소스파일명>

set(CPACK_PROJECT_NAME ${PROJECT_NAME})             # 실행파일명
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})       # 실행파일버젼
include(CPack)                                      # 기본적으로 build 경로에 실행파일을 생성함
