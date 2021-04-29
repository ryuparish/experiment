# Program Name:		EvenOrOdd.asm
# Author:		Ryu Parish
# Program: To determine if a user entered integer is either even or odd

.text
main:
	# Obtain the integer from the user
	la $a0, prompt
	jal PromptInt
	move $s0, $v0
	jal PrintNewLine
	
	# Use sll to shift the number all the way to the left until only the last digit remains
	# then shift all the way back with only the last digit. Then rem with 2 to see if even or
	# odd.
	sll $s0, $s0, 31
	srl $s0, $s0, 31
	
	# If rem equal to zero it is even if 1, it is odd
	rem $s0, $s0, 2
	beqz $s0, Even
	  # The number is odd
	  la $a0, odd
	  jal PrintString
	  jal Exit
	Even:
	# The number is even
	la $a0, even
	jal PrintString
	jal Exit
	
.data
prompt:		.asciiz "Please enter a number to see if it is even or odd: "
odd:		.asciiz "Your number is odd."
even:		.asciiz "Your number is even."

.include "CharlesUtils.asm"