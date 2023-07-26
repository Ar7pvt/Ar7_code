
# import re

# pattern="and"   # it find and
# text='''The A6700 is the new premium model
# in Sony's extensive range of APS-C mirrorless cameras, 
# but can it beat both its main rivals and its cheaper siblings? 
# Find out now by reading our in-depth Sony A6700 review, 
# complete with full-size sample images and videos.'''

# match=re.search(pattern,text)
# print(match)



import re

    # r mean row string
pattern=r"[A-z]ideos"   # it find first capital letter then ideos
text='''The A6700 is the new premium model
in Sony's extensive range of APS-C mirrorless cameras, Aideos
but can it beat both its main rivals and its cheaper siblings? 
Find out now by reading our in-depth Sony A6700 review, 
complete with full-size sample images and Videos.'''

matches=re.finditer(pattern,text)

for match in matches:
#   print(match)
    print(match.span())
    print(text[match.span()[0]:match.span()[1]])


# for more search "meta characters in regular expression"
