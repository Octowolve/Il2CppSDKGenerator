#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LowBloodEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LowBloodEffect"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_Renderers() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& effectFadeDuration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> static T& ORIGIN_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ORIGIN_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& alphaConfig() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& alphaConfigLowQuality() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& dyingEffect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& lastDying() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerInfoChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBlood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToTargetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_currentAlphaConfig() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B0A78))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B0B28))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B0DA4))(this);
	}
	template <typename T = void> T OnPlayerInfoChanged() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B0FB4))(this);
	}
	template <typename T = void> T UpdateBlood() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B0E64))(this);
	}
	template <typename T = void> T UpdateHealth(float healthRatio) {
		return ((T (*)(LowBloodEffect*, float))(Il2CppBase() + 0x24B143C))(this, healthRatio);
	}
	template <typename T = uintptr_t> T FadeToTargetAlpha(float alpha1, float alpha2, float alpha3) {
		return ((T (*)(LowBloodEffect*, float, float, float))(Il2CppBase() + 0x24B1694))(this, alpha1, alpha2, alpha3);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(LowBloodEffect*, float))(Il2CppBase() + 0x24B0BEC))(this, alpha);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B17BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B1854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B185C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerInfoChanged() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B1864))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(LowBloodEffect*))(Il2CppBase() + 0x24B186C))(this);
	}

};

}
