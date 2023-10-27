# /*******************************************************
# * Author: Abdullah Abdelhakeem
# * Date: October 13, 2023
# * Description: IOT Smart voice recognition
# *
# * Type: Task
# * Language: Python
# * Dependencies: None
# * IDE: VS Code
# * Compiler: Interpreter
# * OS: Windows 10
# *
# * Inputs:
# * Outputs:
# *
# * Algorithm:
# *   1.
# *
# * Note:
# *******************************************************/

import speech_recognition as sr
import nltk

# Initialize NLTK (Natural Language Toolkit)
nltk.download('punkt')

# Speech recognition setup
recognizer = sr.Recognizer()

def recognize_speech():
    with sr.Microphone() as source:
        print("Listening...")
        audio = recognizer.listen(source, timeout=5)
        print("Recognition in progress...")

    try:
        # Recognize speech using Google Web Speech API
        recognized_text = recognizer.recognize_google(audio)
        return recognized_text
    except sr.UnknownValueError:
        print("Could not understand audio.")
    except sr.RequestError as e:
        print("Could not request results; {0}".format(e))

def process_intent(text):
    # Perform intent extraction and processing based on your predefined commands
    # You may use NLP techniques and predefined commands to identify the user's intent and take appropriate actions.

    if "weather" in text:
        # Call a weather API and provide the weather information
        print("Fetching weather information...")
        # Add code to fetch and display weather information

    elif "news" in text:
        # Call a news API and provide the latest news
        print("Fetching the latest news...")
        # Add code to fetch and display news

    else:
        print("Sorry, I don't understand that command.")

if __name__ == "__main__":
    while True:
        audio_text = recognize_speech()
        if audio_text:
            print("You said:", audio_text)
            process_intent(audio_text.lower())  # Convert to lowercase for case-insensitive processing
