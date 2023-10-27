# /*******************************************************
# * Author: Abdullah Abdelhakeem
# * Date: October 13, 2023
# * Description: Make your module that contain favourite websites and have function called firefox take url and open website
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
import webbrowser

# Dictionary of favorite websites
favorite_websites = {
    'Google': 'https://www.google.com/',
    'YouTube': 'https://www.youtube.com/',
    'GitHub': 'https://github.com/'
}

def open_url_in_firefox(website_name):
    # Check if the website is in the list of favorites
    if website_name in favorite_websites:
        url = favorite_websites[website_name]
        firefox_path = "C:/Users/AbdullahAbdelhakeem/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Firefox.exe"
        webbrowser.register('firefox', None, webbrowser.BackgroundBrowser(firefox_path))
        webbrowser.get('firefox').open_new_tab(url)
    else:
        print(f"Website '{website_name}' is not in the list of favorites.")

if __name__ == "__main__":
    print("Welcome to My Favorite Websites!")
    print("Available favorite websites:")
    for website_name in favorite_websites:
        print(f"- {website_name}")

    website_choice = input("Enter the name of the website you want to visit: ")
    open_url_in_firefox(website_choice)
