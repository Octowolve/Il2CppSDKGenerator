#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUPlatform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_Platform"));
	}

	template <typename T = Il2CppString*> static T& _lastErrorMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& _alreadyTriedSettingPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& _libPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& _pathSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> static T get_LibPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE878C))(0);
	}
	template <typename T = bool> static T get_IsPathSet() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE883C))(0);
	}
	template <typename T = Il2CppString*> static T GetHoudiniEnginePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE88EC))(0);
	}
	template <typename T = void> static T SetHoudiniEnginePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE8780))(0);
	}
	template <typename T = Il2CppString*> static T GetAllFoldersInPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BE89BC))(0, path);
	}
	template <typename T = void> static T GetAllFoldersInPathHelper(Il2CppString* inPath, uintptr_t pathBuilder) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2BE8B18))(0, inPath, pathBuilder);
	}
	template <typename T = Il2CppString*> static T GetFileName(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BC8CF0))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFileNameWithoutExtension(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BE8CDC))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFolderPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BC51D8))(0, path);
	}
	template <typename T = char> static T get_DirectorySeparator() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE8D84))(0);
	}
	template <typename T = Il2CppString*> static T get_DirectorySeparatorStr() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE8D8C))(0);
	}
	template <typename T = Il2CppString*> static T BuildPath(Il2CppString* folder1, Il2CppString* folder2, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BC54A4))(0, folder1, folder2, args);
	}
	template <typename T = Il2CppString*> static T GetValidRelativePath(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BE8E04))(0, inPath);
	}
	template <typename T = Il2CppString*> static T TrimLastDirectorySeparator(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BC539C))(0, inPath);
	}
	template <typename T = bool> static T DoesPathExist(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BE8F84))(0, inPath);
	}
	template <typename T = bool> static T DoesFileExist(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BAF964))(0, inPath);
	}
	template <typename T = bool> static T DoesDirectoryExist(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BE8FC0))(0, inPath);
	}
	template <typename T = Il2CppString*> static T GetFullPath(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BE8FCC))(0, inPath);
	}
	template <typename T = void> static T WriteBytes(Il2CppString* path, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BDDD34))(0, path, bytes);
	}

};

}
