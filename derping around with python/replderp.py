#more ChatGPT poop
while True:
    try:
        user_input = input(">>> ")
        if user_input == "exit":
            break
        exec(user_input, globals())
    except Exception as e:
        print("Error:", e)
