#ifndef FIREBASE_CLIENT_VERSION
#define FIREBASE_CLIENT_VERSION "3.12.0"
#endif

/**
 * Google's Firebase Realtime Database Arduino Library for ESP32, v3.12.0
 *
 * Created October 30, 2021
 *
 *   Updates:
 * - Reduce overall memory usage by moving from std::string and Arduino String to MB_String.
 * - Add support PSRAM in ESP32 for all dynamic memory allocation.
 * - Fix token (JWT) generation issues.
 * - Fix ethernet connection issue in ESP32 core v2.0.0.
 * - Temporary fix the Firebase RTDB server side issue on silent print parameter.
 * 
 *
 * This library provides ESP32 to perform REST API by GET PUT, POST, PATCH,
 * DELETE data from/to with Google's Firebase database using get, set, update
 * and delete calls.
 *
 * The library was tested and work well with ESP32 based modules.
 *
 * The MIT License (MIT)
 * Copyright (c) 2021 K. Suwatchai (Mobizt)
 *
 *
 * Permission is hereby granted, free of charge, to any person returning a copy
 * of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of
 * the Software, and to permit persons to whom the Software is furnished to do
 * so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
 * OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "Firebase.h"