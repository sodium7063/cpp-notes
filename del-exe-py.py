import os


def main():
    print(
        "WARNING: This script will permanently delete ALL `.exe` files in the current folder and subfolders."
    )
    input("Press Enter to continue or Ctrl+C to abort...")

    # Walk through the directory tree starting at the current folder.
    for root, dirs, files in os.walk("."):
        for file in files:
            # Check if the file ends with .exe (case-insensitive)
            if file.lower().endswith(".exe"):
                file_path = os.path.join(root, file)
                print(f"Deleting: {file_path}")
                try:
                    os.remove(file_path)
                except Exception as e:
                    print(f"Failed to delete {file_path}: {e}")

    print("Deletion complete.")


if __name__ == "__main__":
    main()
