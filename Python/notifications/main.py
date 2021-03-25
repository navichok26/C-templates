import platform, os

def show_notification(title, text):
    plt = platform.system();
    command = gen_command(plt, title, text)
    if command == None:
        print("Ваша OS не поддерживается")
    else:
        os.system(command)

def gen_command(plt, title, text):
    if plt == "Darwin":
        command = '''
        osascript -e 'display notification "{}" with title "{}"'
        '''.format(title, text)
    elif plt == "Linux":
        command = '''
        notify-send "{}" "{}"
        '''.format(title, text)
    else:
        return
    return command

def main():
    show_notification("Hello", "Hello world")


if __name__ == "__main__":
    main()
