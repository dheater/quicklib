# Starter example for building libraries with Catch2 testing

## Dependencies
Conan: [Installation instructions](https://docs.conan.io/en/latest/installation.html)

After installing Conan, run the following to install dependencies:

```
conan install -if .conan conanfile.txt
```

## Building
Run the following series of commands to build the application:
```
mkdir build
cd build
cmake ..
make
```

# Running
From the build directory, run:
```
bin/demo_test
```