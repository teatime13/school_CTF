import sys

def encryption(plain, key):
    cipher_list = []
    key_i = ord(key)
    
    for p in plain:
        crypt = ord(p) ^ key_i
        cipher_list.append(crypt)


    for c in cipher_list:
        print(c, end=", ")
    print("")


if __name__ == "__main__":
    argv = sys.argv
    encryption(argv[1],argv[2])
