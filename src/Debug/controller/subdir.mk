################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../controller/Controller.cpp \
../controller/Interpreter.cpp 

OBJS += \
./controller/Controller.o \
./controller/Interpreter.o 

CPP_DEPS += \
./controller/Controller.d \
./controller/Interpreter.d 


# Each subdirectory must supply rules for building sources it contributes
controller/%.o: ../controller/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


