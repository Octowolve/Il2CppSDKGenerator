#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InjuredScreenEffectBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InjuredScreenEffectBR"));
	}

	template <typename T = float> static T& healthMaxBlood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_startShowEffectBlood() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurveMaxHealthBlood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T GetMaxHealth() {
		return ((T (*)(InjuredScreenEffectBR*))(Il2CppBase() + 0x3710BD8))(this);
	}
	template <typename T = float> T GetCurveMaxHealthBlood() {
		return ((T (*)(InjuredScreenEffectBR*))(Il2CppBase() + 0x3710D70))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetMaxHealth() {
		return ((T (*)(InjuredScreenEffectBR*))(Il2CppBase() + 0x3710F08))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCurveMaxHealthBlood() {
		return ((T (*)(InjuredScreenEffectBR*))(Il2CppBase() + 0x3710F0C))(this);
	}

};

}
