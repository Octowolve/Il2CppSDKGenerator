#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightCookie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightCookie"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lightCookie() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightCookie*))(Il2CppBase() + 0x50272CC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightCookie*))(Il2CppBase() + 0x50272D8))(this);
	}
	template <typename T = void> T DoSetLightCookie() {
		return ((T (*)(SetLightCookie*))(Il2CppBase() + 0x50272F8))(this);
	}

};

}
