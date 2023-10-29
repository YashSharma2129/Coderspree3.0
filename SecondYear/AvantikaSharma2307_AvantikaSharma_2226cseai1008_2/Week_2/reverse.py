def reverseBits(n):
    
    binary_str = bin(n)[2:]
    binary_str = binary_str.zfill(32)
    reversed_str = binary_str[::-1]
    reversed_decimal = int(reversed_str, 2)
    return reversed_decimal



    