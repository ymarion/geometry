################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../view/Drawing.cpp \
../view/ViewFigure.cpp 

OBJS += \
./view/Drawing.o \
./view/ViewFigure.o 

CPP_DEPS += \
./view/Drawing.d \
./view/ViewFigure.d 


# Each subdirectory must supply rules for building sources it contributes
view/%.o: ../view/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


