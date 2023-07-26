# 
import os

files=os.listdir("45Question")
i=1
for file in files:
    if file.endswith(".png"):
       print(file)
       os.rename(f"45Question/{file}",f"45Question/{i}png")
       i=i+1



#   foldername/filename you want to rename , foldername/renamed file
os.rename("45Question/file.txt","45Question/alok.txt")