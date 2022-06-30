section .data
  vm: db 'Inside VM',10
  nvm: db 'Not Inside VM',10

section .text
global _start
_start:
  xor eax, eax
  inc eax
  cpuid
  bt ecx, 0x1f
  jc invm
  mov eax, 4
  mov ebx, 1
  mov ecx, nvm
  mov edx, 14
  int 80h
  jmp exit

invm:
  mov eax, 4
  mov ebx, 1
  mov ecx, vm
  mov edx, 10
  int 80h
  jmp exit
exit:
  mov eax,1
  mov ebx,0
  int 80h
