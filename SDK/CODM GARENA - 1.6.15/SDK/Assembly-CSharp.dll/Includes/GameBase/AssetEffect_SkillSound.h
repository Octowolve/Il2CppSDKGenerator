#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectSkillSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_SkillSound"));
	}

	template <typename T = uintptr_t> T& m_weapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_TriggerSound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& startEvent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& endEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectSkillSound*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8CF48))(this, value, isStart, target);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(AssetEffectSkillSound*))(Il2CppBase() + 0x3B8D458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectSkillSound*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8D65C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(AssetEffectSkillSound*))(Il2CppBase() + 0x3B8D674))(this);
	}

};

}
