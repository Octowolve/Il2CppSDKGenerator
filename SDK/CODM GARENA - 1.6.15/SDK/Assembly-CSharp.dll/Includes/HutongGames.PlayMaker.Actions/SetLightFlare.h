#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightFlare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightFlare"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lightFlare() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightFlare*))(Il2CppBase() + 0x502748C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightFlare*))(Il2CppBase() + 0x5027498))(this);
	}
	template <typename T = void> T DoSetLightRange() {
		return ((T (*)(SetLightFlare*))(Il2CppBase() + 0x50274B8))(this);
	}

};

}
