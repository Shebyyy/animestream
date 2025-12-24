# 📦 Installation Guide for animestream

**Latest Release**: [Check Releases](https://github.com/Shebyyy/animestream/releases)

---

## 📥 Quick Download

1. **Go to**: https://github.com/Shebyyy/animestream/releases
2. **Find latest release**: Click on the latest version tag (e.g., "v1.4.2")
3. **Choose your platform**: Download the appropriate file for your device/OS

---

## 📱 Android Installation

### Download Options

Choose the APK that matches your device:

| APK Type | When to Use | Device Type |
|-----------|---------------|-------------|
| **Universal APK** | Works on all devices | Any Android device |
| **arm64-v8a APK** | Modern Android (2019+) | Most phones (2020+) |
| **armeabi-v7a APK** | Older Android (2014+) | Older phones/tablets |
| **x86_64 APK** | Emulators and x86 | Genymotion, PC-based |

**Example**: If you have a Samsung Galaxy S23, download `arm64-v8a`.

### Installation Steps

#### Method 1: Direct APK Install (Easiest)

1. **Download APK** to your device
2. **Enable Unknown Sources**:
   - Go to Settings → Security
   - Enable "Install unknown apps"
   - Confirm with your device PIN
3. **Install APK**:
   - Open your File Manager
   - Find the downloaded `.apk` file
   - Tap on it
   - Confirm "Install app"
   - Wait for installation to complete

4. **Open animestream**:
   - Tap "Open" after installation
   - Grant permissions when prompted:
     - **Storage access**: To save anime and videos
     - **Network access**: To stream content
     - **Notifications**: For download progress

#### Method 2: Install from Command Line (Advanced)

```bash
# Connect via ADB
adb devices

# Install APK
adb install animestream-*.apk
```

#### Method 3: Install via Package Manager

- **F-Droid**: Download → Open → Install
- **APKPure**: Download → Open → Install
- **APKUpdater**: Download → Open → Install

### First Launch

1. **Open animestream**
2. **Grant permissions**: The app will request:
   - **Storage access**: To save anime and videos
   - **Network access**: To stream content
   - **Notifications**: For download progress
3. **Done!** You're ready to stream anime

---

## 🐧 Linux Installation

### Download Options

| Package | Distribution | Use Case |
|----------|---------------|-------------|
| **deb** | Debian, Ubuntu, Linux Mint | Most Debian-based distros |
| **rpm** | Fedora, openSUSE, RHEL | Most RPM-based distros |
| **Zip** | Portable (any distro) | Testing or distros without package manager |

### Installing .deb (Debian/Ubuntu/Mint)

#### Method 1: GUI Software Center

1. **Download** `animestream-{version}-amd64.deb`
2. **Double-click** the `.deb` file
3. **Enter password** when prompted
4. **Wait** for installation to complete
5. **Find** `animestream` in your app launcher

#### Method 2: Command Line

```bash
# Download
wget https://github.com/Shebyyy/animestream/releases/download/v1.4.2/animestream-1.4.2-amd64.deb

# Install
sudo dpkg -i animestream-*.deb

# Launch
animestream
```

### Installing .rpm (Fedora/openSUSE/RHEL)

```bash
# Download
wget https://github.com/Shebyyy/animestream/releases/download/v1.4.2/animestream-1.4.2-x86_64.rpm

# Install
sudo rpm -i animestream-*.rpm

# Launch
animestream
```

### Installing Zip (Portable)

```bash
# Download
wget https://github.com/Shebyyy/animestream/releases/download/v1.4.2/animestream-1.4.2-linux-x64.zip

# Extract
unzip animestream-*-linux-x64.zip
cd bundle

# Make executable
chmod +x animestream

# Launch
./animestream
```

### Dependencies Required

The `.deb` and `.rpm` packages include all required dependencies.

For zip version, ensure you have:
```bash
# Ubuntu/Debian
sudo apt-get install libgtk-3-0 libwebkit2gtk-4.1-0

# Fedora/RHEL
sudo dnf install webkit2gtk4.1
```

---

## 🪟 Windows Installation

### Download Options

| Package | Description | Use Case |
|----------|-------------|----------|
| **ZIP (Portable)** | No installation required | Testing, USB drive, multiple PCs |
| **EXE (Installer)** | Setup wizard installation | Standard installation, Start menu entry |

### Installing EXE Installer (Recommended)

1. **Download** `Animestream-x86_64-{version}+{build}-Installer.exe`
2. **Double-click** the `.exe` file
3. **Windows SmartScreen** may appear - Click "More info"
4. **Click** "Run" or "Install"
5. **Select Installation Folder**: Default: `C:\Program Files\animestream`
6. **Install** - Wait for the installer to complete
7. **Launch** animestream from:
   - Start Menu
   - Desktop shortcut (if created during installation)

### Installing ZIP (Portable)

1. **Download** `animestream-{version}-windows-x64-portable.zip`
2. **Extract** the ZIP file:
   - Right-click → "Extract All..."
   - Choose extraction location (e.g., `D:\Apps\animestream`)
   - Click "Extract"
3. **Open** extracted folder
4. **Run** `animestream.exe`
5. **(Optional) Create shortcut**:
   - Right-click `animestream.exe`
   - "Send to" → "Desktop (create shortcut)"

### First Launch

1. **Windows Firewall** may prompt - Click "Allow access"
2. **Grant permissions** when prompted:
   - **Network access**: To stream content
   - **Storage access**: To save anime and videos
   - **Notifications**: For download progress
3. **Done!** animestream will appear in your system tray

### Windows Defender Warning

If you see "Windows protected your PC" or similar message:

1. **Open Windows Security**
2. **Click** "Virus & threat protection" → "Protection history"
3. **Find** animestream in the list
4. **Click** "Actions" → "Allow on device"
5. **Confirm** with your PIN/password

This can happen with unsigned apps.

---

## 🍎 macOS Installation

### Note

macOS builds are currently **not available** in CI/CD due to Swift bridging issues.

**Alternatives**:
1. Build locally with Flutter Desktop
2. Check back for future CI/CD support

### If You Have a macOS Build

**Installation**:

1. **Download** `.dmg` or `.app.zip` from GitHub Releases
2. **Open DMG**:
   - Double-click the `.dmg` file
   - It will mount as a disk
3. **Drag & Drop** `animestream.app` to `/Applications` folder
4. **Wait** for copy to complete
5. **Eject** the DMG from Finder

**Or with ZIP**:

1. **Download** `.app.zip`
2. **Extract** the ZIP file
3. **Move** `animestream.app` to `/Applications`
4. **Done!**

### Gatekeeper Warning

If you see "app can't be opened because it's from an unidentified developer":

1. **Right-click** `animestream.app`
2. **Select** "Open" in the dialog
3. **Click** "Open Anyway" in the next dialog
4. **Launch** the app

5. **For permanent fix**:
   - Right-click app → "Open" → Go to "Security & Privacy"
   - Click "Open Anyway" at bottom
   - The app will launch without warnings in the future

---

## 🤖 Troubleshooting

### Android Issues

**"Installation Blocked"**

Go to:
```
Settings → Security → Install unknown apps
```
Enable the option and retry.

**"App Not Installed"**

- Check if you downloaded the correct APK architecture
- Try Universal APK if split APKs don't work
- Clear cache: Settings → Apps → animestream → Clear data → Clear cache

**"Parse Error"**

- This is a Flutter issue
- Try downloading again
- Make sure to download the complete APK

### Linux Issues

**"Permission Denied"**

```bash
chmod +x animestream
```

**"Missing Dependencies"**

The `.deb` and `.rpm` packages include all required dependencies.

For zip version, install:
```bash
# Debian/Ubuntu
sudo apt-get install libgtk-3-0 libwebkit2gtk-4.1-0

# Fedora/RHEL
sudo dnf install webkit2gtk4.1
```

**"Command Not Found: animestream"**

For zip version, you're in the wrong directory:
```bash
cd bundle
./animestream
```

### Windows Issues

**"This App Can't Run on Your PC"**

- You downloaded the wrong architecture
- Windows builds are for **x86_64 (Intel/AMD)**
- Won't work on **ARM** devices (Surface Pro X)

**"Windows Protected Your PC"**

1. Click "More info"
2. Click "Run anyway"
3. Confirm with your PIN/password

**"App Won't Launch"**

1. Check Windows Defender - allow animestream
2. Check Firewall - allow network access
3. Try running as Administrator
4. Extract ZIP to a different location (short path)

**"Missing MSVC DLL"**

The EXE installer includes all required DLLs. If this error appears:
- Download the portable ZIP instead
- It's self-contained and doesn't need the installer

### macOS Issues

**"Can't Be Opened"**

Right-click app → "Open" → "Open Anyway" (see Gatekeeper section above)

**"App Damaged"**

The downloaded file might be corrupted. Download again.

---

## 💡 Tips

### Android
- **Choose split APKs** for faster downloads (smaller files)
- **Universal APK** is easiest but larger
- APKs are unsigned - you may need to "Allow unknown sources"

### Linux
- **Use .deb for Debian/Ubuntu/Mint** (recommended)
- **Use .rpm for Fedora/openSUSE/RHEL**
- **Use .zip for portable/testing**
- All formats include required dependencies

### Windows
- **Use EXE installer** for standard installation
- **Use ZIP portable** for USB drive/multiple PCs
- EXE installer adds Start Menu entry and desktop shortcut

### General
- Make sure you have enough storage space
- Use stable internet connection for initial use
- Check system requirements before downloading

---

## 🔄 Updating animestream

### Check for Updates

When a new version is released:

1. animestream will notify you (if notifications enabled)
2. Or check: https://github.com/Shebyyy/animestream/releases

### Update Manually

1. Download the new version
2. Install over the existing app
3. Your settings and saved anime will be preserved

---

## 📝 Changelog

See [GitHub Releases](https://github.com/Shebyyy/animestream/releases) for detailed changelog with each version.

---

## ⚠️ Disclaimer

By using this app, you agree that the developer(s) of animestream is not responsible for any content within the app.

---

## 🆘 Need Help?

### Report Issues

If you encounter issues not covered here:

1. **Check GitHub Issues**: https://github.com/Shebyyy/animestream/issues
2. **Search existing issues**: Your problem may already be reported
3. **Create new issue**: Include:
   - Platform (Android, Linux, Windows, macOS)
   - Version you're installing
   - Error message or issue description
   - Screenshots (if applicable)
   - Steps you've already tried

### System Requirements

**Minimum Requirements:**

| Platform | Requirements |
|-----------|---------------|
| **Android** | Android 5.0+ (Lollipop) |
| **Linux** | Linux distribution with GTK 3.0+ |
| **Windows** | Windows 10+ |
| **macOS** | macOS 10.14+ (Mojave) or later |

**Recommended Requirements:**

| Platform | Requirements |
|-----------|---------------|
| **Android** | Android 10+ recommended, 4GB RAM, Android 11+ |
| **Linux** | 8GB RAM, modern graphics, recent distribution |
| **Windows** | Windows 11 recommended, 8GB RAM, decent graphics |
| **macOS** | 8GB RAM, macOS 11+ (if supported) |

---

## 📊 Summary

| Platform | Package Files | Installation |
|----------|---------------|-------------|
| **Android** | 5 APKs | Direct APK install |
| **Linux** | deb, rpm, zip | Package manager or extract |
| **Windows** | EXE, ZIP | Setup wizard or extract |
| **macOS** | DMG, app zip | Drag & Drop to Applications (CI disabled) |

**Ready to install and enjoy streaming anime!** 🎬

---

## 📞 Quick Reference

| Platform | Download | Install |
|-----------|----------|----------|
| Android (Phone) | Universal/Split APK | Tap to install |
| Android (Tablet) | Universal/Split APK | Tap to install |
| Android (Emulator) | x86_64 APK | Drag to emulator |
| Linux (Ubuntu) | .deb | Double-click |
| Linux (Fedora) | .rpm | `sudo rpm -i` |
| Linux (Portable) | .zip | Extract and run |
| Windows (Standard) | .EXE | Run installer |
| Windows (Portable) | .ZIP | Extract and run |
| macOS (DMG) | .dmg | Drag to Applications |
| macOS (ZIP) | .zip | Move to Applications |

**Happy streaming!** 🚀
