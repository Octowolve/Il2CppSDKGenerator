#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class Path
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "Path"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& InvalidPathChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& AltDirectorySeparatorChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = char> static T& DirectorySeparatorChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6);
	}
	template <typename T = char> static T& PathSeparator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& DirectorySeparatorStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = char> static T& VolumeSeparatorChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PathSeparatorChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& dirEqualsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> static T ChangeExtension(Il2CppString* path, Il2CppString* extension) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FFF12C))(0, path, extension);
	}
	template <typename T = Il2CppString*> static T Combine(Il2CppString* path1, Il2CppString* path2) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FCE9DC))(0, path1, path2);
	}
	template <typename T = Il2CppString*> static T CleanPath(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FFF890))(0, s);
	}
	template <typename T = Il2CppString*> static T GetDirectoryName(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF0EE8))(0, path);
	}
	template <typename T = Il2CppString*> static T GetExtension(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x40006BC))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFileName(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF1790))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFileNameWithoutExtension(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x40008A4))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFullPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF16F0))(0, path);
	}
	template <typename T = Il2CppString*> static T WindowsDriveAdjustment(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x40011F0))(0, path);
	}
	template <typename T = Il2CppString*> static T InsecureGetFullPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4000950))(0, path);
	}
	template <typename T = bool> static T IsDsc(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4001618))(0, c);
	}
	template <typename T = Il2CppString*> static T GetPathRoot(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FFFEB4))(0, path);
	}
	template <typename T = bool> static T IsPathRooted(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FFF5DC))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetInvalidPathChars() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFF050))(0);
	}
	template <typename T = int32_t> static T findExtension(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FFF4EC))(0, path);
	}
	template <typename T = Il2CppString*> static T GetServerAndShare(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x40023E4))(0, path);
	}
	template <typename T = bool> static T SameRoot(Il2CppString* root, Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x40025D8))(0, root, path);
	}
	template <typename T = Il2CppString*> static T CanonicalizePath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4001720))(0, path);
	}

};

}
