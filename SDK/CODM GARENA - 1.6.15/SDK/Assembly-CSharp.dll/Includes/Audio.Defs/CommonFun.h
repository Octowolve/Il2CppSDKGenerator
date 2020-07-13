#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Defs {

class CommonFun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Defs", "CommonFun"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetFileNameSuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileNameFromPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T GetFileNameSuffix(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44E08D8))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFileNameFromPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44E0B10))(0, path);
	}

};

}
