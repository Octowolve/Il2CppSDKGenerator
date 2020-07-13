#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayTask"));
	}

	template <typename T = bool> T& m_IsPlayEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsEffectLoaded() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_TPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_FPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t owner, uintptr_t component) {
		return ((T (*)(IndividuationPlayTask*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F045C4))(this, owner, component);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IndividuationPlayTask*, float))(Il2CppBase() + 0x1F04828))(this, deltaTime);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayTask*))(Il2CppBase() + 0x1F055B8))(this);
	}
	template <typename T = void> T Tick_TPP(float deltaTime) {
		return ((T (*)(IndividuationPlayTask*, float))(Il2CppBase() + 0x1F04FB4))(this, deltaTime);
	}
	template <typename T = void> T Tick_FPP(float deltaTime) {
		return ((T (*)(IndividuationPlayTask*, float))(Il2CppBase() + 0x1F048F4))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(IndividuationPlayTask*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F062C8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(IndividuationPlayTask*, float))(Il2CppBase() + 0x1F062CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(IndividuationPlayTask*))(Il2CppBase() + 0x1F06370))(this);
	}

};

}
