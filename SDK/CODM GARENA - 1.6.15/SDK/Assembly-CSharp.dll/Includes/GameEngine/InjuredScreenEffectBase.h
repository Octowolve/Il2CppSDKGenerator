#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InjuredScreenEffectBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InjuredScreenEffectBase"));
	}

	template <typename T = bool> T& m_RoundEnded() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x33);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerInfoChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOrRecoverEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = float> T GetMaxHealth() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x37103BC))(this);
	}
	template <typename T = void> T OnPlayerInfoChanged() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x3710478))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x370FEAC))(this);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x370FBD4))(this);
	}
	template <typename T = bool> T IsShowEffect() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x37105A8))(this);
	}
	template <typename T = float> T CalculatePercent() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x3710814))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x3710188))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x3710238))(this);
	}
	template <typename T = void> T HideOrRecoverEffect(bool hide) {
		return ((T (*)(InjuredScreenEffectBase*, bool))(Il2CppBase() + 0x3710A40))(this, hide);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x3710B1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(InjuredScreenEffectBase*))(Il2CppBase() + 0x3710B24))(this);
	}

};

}
