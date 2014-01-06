################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../controller/command/AbstractCommand.cpp \
../controller/command/ClearCommand.cpp \
../controller/command/Command.cpp \
../controller/command/DeleteCommand.cpp \
../controller/command/LoadCommand.cpp \
../controller/command/MoveCommand.cpp 

OBJS += \
./controller/command/AbstractCommand.o \
./controller/command/ClearCommand.o \
./controller/command/Command.o \
./controller/command/DeleteCommand.o \
./controller/command/LoadCommand.o \
./controller/command/MoveCommand.o 

CPP_DEPS += \
./controller/command/AbstractCommand.d \
./controller/command/ClearCommand.d \
./controller/command/Command.d \
./controller/command/DeleteCommand.d \
./controller/command/LoadCommand.d \
./controller/command/MoveCommand.d 


# Each subdirectory must supply rules for building sources it contributes
controller/command/%.o: ../controller/command/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


