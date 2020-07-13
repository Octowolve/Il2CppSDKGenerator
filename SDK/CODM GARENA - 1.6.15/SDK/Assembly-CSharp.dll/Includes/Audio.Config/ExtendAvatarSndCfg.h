#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Config {

class ExtendAvatarSndCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Config", "ExtendAvatarSndCfg"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& WwiseEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
