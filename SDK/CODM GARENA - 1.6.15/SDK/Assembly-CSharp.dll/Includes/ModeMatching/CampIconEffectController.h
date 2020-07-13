#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class CampIconEffectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "CampIconEffectController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRotationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CampIconEffectController*))(Il2CppBase() + 0x3301DE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CampIconEffectController*))(Il2CppBase() + 0x3301E88))(this);
	}
	template <typename T = void> T GoToStop() {
		return ((T (*)(CampIconEffectController*))(Il2CppBase() + 0x3301F94))(this);
	}
	template <typename T = void> T ShowCamp(bool startWithLoop) {
		return ((T (*)(CampIconEffectController*, bool))(Il2CppBase() + 0x3302208))(this, startWithLoop);
	}
	template <typename T = void> T HideCamp() {
		return ((T (*)(CampIconEffectController*))(Il2CppBase() + 0x33025A8))(this);
	}
	template <typename T = void> T PlayRotationAnimation() {
		return ((T (*)(CampIconEffectController*))(Il2CppBase() + 0x3302414))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CampIconEffectController*))(Il2CppBase() + 0x3302860))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CampIconEffectController*))(Il2CppBase() + 0x3302868))(this);
	}

};

}
