# # text to speech converter

# inTerminal
# pip install gtts(google text to speech)
# pip install playsound

import gtts
import playsound

text="my name is alok raj "   #you can take user input also

sound=gtts.gTTS(text,lang="fr")  #you can change language
sound.save("56Speech.mp3") 
playsound.playsound("56Speech.mp3")



# # or 
# # pip install pyttsx3    write in terminal
# import pyttsx3

# text_speech=pyttsx3.init()

# answer="This is alok raj"

# text_speech.say(answer)
# text_speech.runAndWait()