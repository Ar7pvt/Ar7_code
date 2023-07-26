# https://docs.python.org/3/library/shutil.html?highlight=shutil#module-shutil  
#copy the link paste in google for more information 
# video no 87  https://youtu.be/wII2JhNACJE


import shutil
import os

# shutil.copy("alok.py","copyAlok2.py")  # it help to copy file

# shutil.copytree("45question","55copy")  # it help to copy folder

# shutil.move("45question/Anshu.txt","55Anshu.txt")  # it help to move the folder

shutil.rmtree("55copy")  #it help to remove folder

# #There is no command to remove file  so we use os module
os.remove("copyAlok2.py")
