# Android Edge Detection

Real-time edge detection app using OpenCV, JNI, and OpenGL ES.

## Features
- Real-time Canny edge detection
- 15-30 FPS performance
- OpenGL ES rendering
- JNI bridge (Kotlin ↔ C++)
- TypeScript web viewer

## Build
```bash
./gradlew assembleDebug
```

## Install
```bash
adb install -r app/build/outputs/apk/debug/app-debug.apk
```

## Tech Stack
- Kotlin + C++
- OpenCV 4.8.0
- OpenGL ES 2.0
- Gradle 8.4
- AGP 8.3.0
## Performance
- FPS: 15-30
- Resolution: 1280x720
- Supported ABIs: arm64-v8a, armeabi-v7a
## Architecture
- Camera → OpenCV → OpenGL pipeline
- JNI bridge for native processing
- Real-time frame processing


screenshots

<img src="Screenshot 2025-11-14 152334.png">



