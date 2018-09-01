# author: Ganesha Danu Enastika (github.com/blinfoldking)
# status: Correct/Accepted

key = {
        'a': 'ei',
        'b': 'bi',
        'c': 'si',
        'd': 'di',
        'e': 'i',
        'f': 'ef',
        'g': 'ji',
        'h': 'eitf',
        'i': 'ai',
        'j': 'djei',
        'k': 'kei',
        'l': 'el',
        'm': 'em',
        'n': 'en',
        'o': 'ou',
        'p': 'pi',
        'q': 'kiu',
        'r': 'ar',
        's': 'es',
        't': 'ti',
        'u': 'ju',
        'v': 'vi',
        'w': 'dabelju',
        'x': 'eks',
        'y': 'wai',
        'z': 'zi'
}

inp = input()
out = ""

for c in inp:
    if c >= 'a' and c <= 'z':
        out += key[c]
    else:
        out += c

print(out)
