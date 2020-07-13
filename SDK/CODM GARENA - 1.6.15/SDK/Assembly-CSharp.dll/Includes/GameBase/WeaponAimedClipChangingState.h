#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimedClipChangingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimedClipChangingState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChangeClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T GetChangeClipTime() {
		return ((T (*)(WeaponAimedClipChangingState*))(Il2CppBase() + 0x1C4ACB0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetChangeClipTime() {
		return ((T (*)(WeaponAimedClipChangingState*))(Il2CppBase() + 0x1C4AD68))(this);
	}

};

}
