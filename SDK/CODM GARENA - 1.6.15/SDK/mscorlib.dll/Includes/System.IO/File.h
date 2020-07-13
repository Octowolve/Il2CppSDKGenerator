#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class File
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "File"));
	}

	template <typename T = void*> static T& defaultLocalFileTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Copy(Il2CppString* sourceFileName, Il2CppString* destFileName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FF34F0))(0, sourceFileName, destFileName);
	}
	template <typename T = void> static T Copy_1(Il2CppString* sourceFileName, Il2CppString* destFileName, bool overwrite) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x3FF350C))(0, sourceFileName, destFileName, overwrite);
	}
	template <typename T = uintptr_t> static T Create(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF4240))(0, path);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* path, int32_t bufferSize) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3FF4248))(0, path, bufferSize);
	}
	template <typename T = void> static T Delete(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEF9E8))(0, path);
	}
	template <typename T = bool> static T Exists(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FCEE3C))(0, path);
	}
	template <typename T = uintptr_t> static T GetAttributes(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF3FBC))(0, path);
	}
	template <typename T = uintptr_t> static T GetCreationTime(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF433C))(0, path);
	}
	template <typename T = uintptr_t> static T GetLastWriteTime(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF487C))(0, path);
	}
	template <typename T = void> static T Move(Il2CppString* sourceFileName, Il2CppString* destFileName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FF4A1C))(0, sourceFileName, destFileName);
	}
	template <typename T = uintptr_t> static T Open(Il2CppString* path, uintptr_t mode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF50A4))(0, path, mode);
	}
	template <typename T = uintptr_t> static T Open_1(Il2CppString* path, uintptr_t mode, uintptr_t access, uintptr_t share) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FF5198))(0, path, mode, access, share);
	}
	template <typename T = uintptr_t> static T OpenRead(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF5260))(0, path);
	}
	template <typename T = uintptr_t> static T OpenText(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF5320))(0, path);
	}
	template <typename T = void> static T SetAttributes(Il2CppString* path, uintptr_t fileAttributes) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF53B0))(0, path, fileAttributes);
	}
	template <typename T = void> static T SetLastWriteTime(Il2CppString* path, uintptr_t lastWriteTime) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF54D4))(0, path, lastWriteTime);
	}
	template <typename T = void> static T CheckPathExceptions(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF44DC))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReadAllBytes(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF5740))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReadAllLines(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF5A1C))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReadAllLines_1(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FF5B5C))(0, reader);
	}
	template <typename T = Il2CppString*> static T ReadAllText(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF5CC0))(0, path);
	}
	template <typename T = Il2CppString*> static T ReadAllText_1(Il2CppString* path, uintptr_t encoding) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF5D70))(0, path, encoding);
	}
	template <typename T = void> static T WriteAllBytes(Il2CppString* path, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FF5F3C))(0, path, bytes);
	}
	template <typename T = void> static T WriteAllLines(Il2CppString* path, Il2CppArray<uintptr_t>* contents) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FF60D0))(0, path, contents);
	}
	template <typename T = void> static T WriteAllLines_1(uintptr_t writer, Il2CppArray<uintptr_t>* contents) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FF62FC))(0, writer, contents);
	}
	template <typename T = void> static T WriteAllText(Il2CppString* path, Il2CppString* contents) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FF6370))(0, path, contents);
	}
	template <typename T = void> static T WriteAllText_1(Il2CppString* path, Il2CppString* contents, uintptr_t encoding) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF6430))(0, path, contents, encoding);
	}
	template <typename T = uintptr_t> static T get_DefaultLocalFileTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FF46D8))(0);
	}

};

}
