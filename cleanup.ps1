$currentPath = (Get-Item .).FullName

Write-Host "This script will delete all .exe files in: " -NoNewLine
Write-Host $currentPath -ForegroundColor Cyan

If ((Read-Host "Are you sure? (Y/n)") -Eq "Y") {
    Get-ChildItem -Path $currentPath *.exe -Recurse | ForEach {
        Write-Host $_.FullName
        Remove-Item -Path $_.FullName
    }
}
