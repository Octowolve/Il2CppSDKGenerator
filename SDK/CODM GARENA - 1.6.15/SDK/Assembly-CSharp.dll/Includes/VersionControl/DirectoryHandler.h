#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace VersionControl {

class DirectoryHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VersionControl", "DirectoryHandler"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_EnsureDirectoryExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateORClearDirectory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T EnsureDirectoryExist(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4887D58))(0, filePath);
	}
	template <typename T = void> static T CreateORClearDirectory(Il2CppString* dirPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4887E68))(0, dirPath);
	}

};

}
