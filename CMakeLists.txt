cmake_minimum_required(VERSION 3.23)
project(graph-puzzle-game-yagmurdeler)

set(CMAKE_CXX_STANDARD 17)

add_executable(graph-puzzle-game-yagmurdeler Main.cpp src/List/Node.cpp src/List/LinkedList.cpp src/List/DoublyNode.cpp src/List/DoublyLinkedList.cpp src/Array/Element.cpp src/Array/Stack.cpp src/List/Stack.cpp)