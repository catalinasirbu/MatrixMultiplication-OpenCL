#include <iostream>
#include <CL/cl.h>

int main() {
    cl_platform_id platform_id = NULL;
    cl_device_id device_id = NULL;
    cl_uint num_devices;
    cl_int err;

    // Get the first available platform
    err = clGetPlatformIDs(1, &platform_id, NULL);
    if (err != CL_SUCCESS) {
        std::cerr << "Error getting platform ID: " << err << std::endl;
        return EXIT_FAILURE;
    }

    // Get the first available device
    err = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_ALL, 1, &device_id, &num_devices);
    if (err != CL_SUCCESS) {
        std::cerr << "Error getting device ID: " << err << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "OpenCL is working!" << std::endl;

    return EXIT_SUCCESS;
}
