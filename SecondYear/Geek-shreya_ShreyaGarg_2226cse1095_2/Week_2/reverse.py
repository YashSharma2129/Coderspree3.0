def reverseBits(n):
    a = "{:032b}".format(n)
    bi = (a[::-1])
    dec = int(bi,2)
    return(dec)
