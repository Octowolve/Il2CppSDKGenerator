#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SentryGunPawnInitializeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SentryGunPawnInitializeData"));
	}

	template <typename T = uint32_t> T& SentryGunID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& AliveTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& actorRoot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
