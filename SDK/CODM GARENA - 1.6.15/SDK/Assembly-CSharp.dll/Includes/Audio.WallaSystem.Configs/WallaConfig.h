#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.WallaSystem.Configs {

class WallaConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.WallaSystem.Configs", "WallaConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Events() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EventDuration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& AmbientEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DetectRange() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
