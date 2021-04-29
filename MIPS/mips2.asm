.text
.global main
main:
la $a0, prompt
jal PromptInt
move $s0, $v0
BeginLoop:
seq $t0, $s0, -1
bnez $t0, EndLoop
la $a0, result
move $a1, $s0
jal PrintInt
slti $t0, $s0, 100
beqz $t0, BigNumber
la $a0, little
jal PrintString
b EndIf
BigNumber:
  la $a0, big
  jal PrintString
EndIf:
la $a0, tryAgain
jal PrintString
la $a0 prompt
jal PromptInt
move $s0, $v0
b BeginLoop
EndLoop:
jal Exit
.data
prompt: .asciiz "\nEneter a number (-1 to end)"
result: .asciiz "\nYou entered "
big: .asciiz "\nThat is a big number"
little: .asciiz "\nThat is a little number"
tryAgain: .asciiz "\nTry again"
.include "CharlesUtils.asm"