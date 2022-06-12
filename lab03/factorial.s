.globl factorial

.data
n: .word 0

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    bne a0, x0, routine
	addi a0, a0, 1
    jr ra
routine:
    addi a1, a0, 1
    addi a0, x0, 1
	addi t0, x0, 1
loop:
	bge t0, a1, exit
	mul a0, a0, t0
    addi t0, t0, 1
    jal x0, loop
exit:
	jr ra
