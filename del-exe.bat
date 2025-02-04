@echo off
echo WARNING: This script will permanently delete ALL .exe files in the current folder and subfolders.
pause

for /R %%F in (*.exe) do (
    echo Deleting: "%%F"
    del /F /Q "%%F"
)

echo.
echo Deletion complete.
pause
