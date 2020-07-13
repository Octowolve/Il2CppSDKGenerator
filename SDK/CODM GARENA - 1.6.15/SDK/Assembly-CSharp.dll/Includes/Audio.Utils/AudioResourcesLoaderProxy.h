#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class AudioResourcesLoaderProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "AudioResourcesLoaderProxy"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadAllTextFromABOrResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeserializeFromFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T Load(Il2CppString* strPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E580BC))(0, strPath);
	}
	template <typename T = Il2CppString*> static T ReadAllTextFromABOrResources(Il2CppString* strPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4509BC8))(0, strPath);
	}
	template <typename T = uintptr_t> static T DeserializeFromFile(Il2CppString* strPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3348A64))(0, strPath);
	}

};

}
