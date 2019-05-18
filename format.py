import re

with open('reducedpre.c') as f:
    contents = f.read()

with open('template.txt') as f:
    format_data = f.read()

len_format = len(re.sub('[\n \t]', '', format_data))

if len(contents) < len_format - 5:
	contents += '/*' + '#' * (len_format - len(contents) - 4) + '*/'



with open('busy_beaver.c', 'w') as f:
        idx = 0
        for char in format_data:
            if char in '\n\t\r ':
                f.write(char)
            else:
                f.write(contents[idx])
                idx += 1

