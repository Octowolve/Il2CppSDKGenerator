#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FullScreenGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FullScreenGameHUD"));
	}

	template <typename T = uintptr_t> T& m_BGSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FullScreenGameHUD*))(Il2CppBase() + 0x31EB3FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(FullScreenGameHUD*))(Il2CppBase() + 0x31EB590))(this);
	}

};

}
