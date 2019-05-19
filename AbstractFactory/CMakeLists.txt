cmake_minimum_required(VERSION 3.14)
project(shopa)

set(CMAKE_CXX_STANDARD 17)

add_executable(shopa main.cpp src/MusicFactoryInterface.cpp src/MusicFactoryInterface.h src/GuitarFactory.h src/GuitarFactory.cpp src/ProductInterface.cpp src/ProductInterface.h src/Guitar.cpp src/Guitar.h src/DrumFactory.cpp src/DrumFactory.h src/Drum.cpp src/Drum.h src/SynthesizerFactory.cpp src/SynthesizerFactory.h src/Synthersizer.cpp src/Synthersizer.h)