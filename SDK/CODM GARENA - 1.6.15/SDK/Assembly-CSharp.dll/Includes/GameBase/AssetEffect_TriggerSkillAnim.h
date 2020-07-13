#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectTriggerSkillAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_TriggerSkillAnim"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreInRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T IgnoreInRecover() {
		return ((T (*)(AssetEffectTriggerSkillAnim*))(Il2CppBase() + 0x3B8EB04))(this);
	}
	template <typename T = void> T TriggerAnim() {
		return ((T (*)(AssetEffectTriggerSkillAnim*))(Il2CppBase() + 0x3B8EBA4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IgnoreInRecover() {
		return ((T (*)(AssetEffectTriggerSkillAnim*))(Il2CppBase() + 0x3B8ED94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerAnim() {
		return ((T (*)(AssetEffectTriggerSkillAnim*))(Il2CppBase() + 0x3B8ED98))(this);
	}

};

}
