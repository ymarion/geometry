################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../controller/command/add/AddAggregate.cpp \
../controller/command/add/AddCircle.cpp \
../controller/command/add/AddCommand.cpp \
../controller/command/add/AddLine.cpp \
../controller/command/add/AddPolyline.cpp \
../controller/command/add/AddRectangle.cpp 

OBJS += \
./controller/command/add/AddAggregate.o \
./controller/command/add/AddCircle.o \
./controller/command/add/AddCommand.o \
./controller/command/add/AddLine.o \
./controller/command/add/AddPolyline.o \
./controller/command/add/AddRectangle.o 

CPP_DEPS += \
./controller/command/add/AddAggregate.d \
./controller/command/add/AddCircle.d \
./controller/command/add/AddCommand.d \
./controller/command/add/AddLine.d \
./controller/command/add/AddPolyline.d \
./controller/command/add/AddRectangle.d 


# Each subdirectory must supply rules for building sources it contributes
controller/command/add/%.o: ../controller/command/add/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


