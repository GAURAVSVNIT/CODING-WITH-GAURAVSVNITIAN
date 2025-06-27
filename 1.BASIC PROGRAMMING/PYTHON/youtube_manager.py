import json

def load_data():
    try:
        with open('youtube.txt', 'r') as file:
            return json.load(file)
    except FileNotFoundError:
        return []
    except json.JSONDecodeError:
        print("Error decoding JSON. Starting with an empty list.")
        return []

def save_data_helper(videos):    
    with open('youtube.txt', 'w') as file:
        json.dump(videos, file)

def list_all_youtube_videos(videos):
    for index, video in enumerate(videos, start=1):
        print(f"{index}. {video}")

def add_new_youtube_video(videos):
    name = input("Enter the name of the video: ")
    time = input("Enter the time of the video: ")
    videos.append({'name': name, 'time': time})
    save_data_helper(videos)

def update_youtube_video(videos):
    pass

def delete_youtube_video(videos):
    pass

def main():

    videos = load_data()
    while True:
        print("Welcome to Youtube Manager")
        print("1. List all youtube videos")
        print("2. Add a new youtube video")
        print("3. Update a youtube video")
        print("4. Delete a youtube video")
        print("5. Exit")

        choice = input("Enter your choice: ")
        print(videos)

        match choice:
            case '1':
                list_all_youtube_videos(videos)
            case '2':
                add_new_youtube_video(videos)
            case '3':
                update_youtube_video(videos)
            case '4':
                delete_youtube_video(videos)
            case '5':
                break
            case _:
                print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
