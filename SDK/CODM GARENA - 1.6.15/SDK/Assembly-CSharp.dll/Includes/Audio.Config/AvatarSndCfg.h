#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Config {

class AvatarSndCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Config", "AvatarSndCfg"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Configs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeSerialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T DeSerialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DF654))(0);
	}

};

}
