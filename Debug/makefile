################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Services/NodeRed_Communication/subdir.mk
-include Services/I2C_Communication/subdir.mk
-include MCAL/USART/subdir.mk
-include MCAL/TIMER2/subdir.mk
-include MCAL/TIMER1/subdir.mk
-include MCAL/TIMER0/subdir.mk
-include MCAL/I2C/subdir.mk
-include MCAL/GIE/subdir.mk
-include MCAL/EXTI/subdir.mk
-include MCAL/DIO/subdir.mk
-include MCAL/ADC/subdir.mk
-include LIB/subdir.mk
-include HAL/Soil\ Moisture\ Sensor/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/LDR/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/DHT11/subdir.mk
-include HAL/DC_MOTOR/subdir.mk
-include HAL/BUZZER/subdir.mk
-include APP/Sensors/subdir.mk
-include APP/Display/subdir.mk
-include APP/Automatic_Control/subdir.mk
-include APP/AGMS/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
S.A.A.S.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: S.A.A.S.elf secondary-outputs

# Tool invocations
S.A.A.S.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,S.A.A.S.map -mmcu=atmega32 -o "S.A.A.S.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

S.A.A.S.lss: S.A.A.S.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S S.A.A.S.elf  >"S.A.A.S.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: S.A.A.S.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 S.A.A.S.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) S.A.A.S.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
