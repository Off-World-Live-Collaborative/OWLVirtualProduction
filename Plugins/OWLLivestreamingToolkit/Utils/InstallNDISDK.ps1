param(
	[string]$NDIURL = "https://off-world-public-assets.s3.amazonaws.com/NDI_Runtime/NDI+5+Runtime.exe"
)
# Create a temporary directory to store download
$parent = [System.IO.Path]::GetTempPath()
[string] $name = [System.Guid]::NewGuid()
$TempDir = Join-Path $parent $name
"Generating Temporary Directory: $TempDir \n"
New-Item -ItemType Directory -Path $TempDir

"Downloading $NDIURL..."
$DestinationFile = Join-Path $TempDir "NDISdkInstaller.exe"
Invoke-WebRequest -Uri $NDIURL -OutFile $DestinationFile

"Executing Installer..."
Start-Process $DestinationFile -Wait

"Cleanup install directory"
Remove-Item -Recurse -Force -Path $TempDir

"Complete"