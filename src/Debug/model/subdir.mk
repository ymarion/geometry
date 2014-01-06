################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../model/Aggregate.cpp \
../model/Circle.cpp \
../model/Figure.cpp \
../model/Line.cpp \
../model/Point.cpp \
../model/Polyline.cpp \
../model/Rectangle.cpp 

OBJS += \
./model/Aggregate.o \
./model/Circle.o \
./model/Figure.o \
./model/Line.o \
./model/Point.o \
./model/Polyline.o \
./model/Rectangle.o 

CPP_DEPS += \
./model/Aggregate.d \
./model/Circle.d \
./model/Figure.d \
./model/Line.d \
./model/Point.d \
./model/Polyline.d \
./model/Rectangle.d 


# Each subdirectory must supply rules for building sources it contributes
model/%.o: ../model/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


