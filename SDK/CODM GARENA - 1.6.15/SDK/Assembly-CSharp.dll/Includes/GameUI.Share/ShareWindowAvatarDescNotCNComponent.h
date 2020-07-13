#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareWindowAvatarDescNotCNComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareWindowAvatarDescNotCNComponent"));
	}

	template <typename T = float> static T& MAX_WEAPON_NAME_LABEL_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ResetLayout() {
		return ((T (*)(ShareWindowAvatarDescNotCNComponent*))(Il2CppBase() + 0x3C85A90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetLayout() {
		return ((T (*)(ShareWindowAvatarDescNotCNComponent*))(Il2CppBase() + 0x3C85FBC))(this);
	}

};

}
