# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-src"
  "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-build"
  "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-subbuild/dd-populate-prefix"
  "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-subbuild/dd-populate-prefix/tmp"
  "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-subbuild/dd-populate-prefix/src/dd-populate-stamp"
  "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-subbuild/dd-populate-prefix/src"
  "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-subbuild/dd-populate-prefix/src/dd-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-subbuild/dd-populate-prefix/src/dd-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/infrader-linux/code/leetcode/Valid_Parentheses/build/_deps/dd-subbuild/dd-populate-prefix/src/dd-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
