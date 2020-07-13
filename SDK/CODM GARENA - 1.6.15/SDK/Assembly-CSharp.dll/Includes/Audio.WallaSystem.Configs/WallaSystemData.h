#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.WallaSystem.Configs {

class WallaSystemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.WallaSystem.Configs", "WallaSystemData"));
	}

	template <typename T = Il2CppString*> static T& kDataPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T LoadData() {
		return ((T (*)(void *))(Il2CppBase() + 0x324AAE4))(0);
	}

};

}
