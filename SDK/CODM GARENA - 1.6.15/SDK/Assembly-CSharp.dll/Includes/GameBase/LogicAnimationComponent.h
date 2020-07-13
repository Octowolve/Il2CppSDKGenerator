#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LogicAnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LogicAnimationComponent"));
	}

	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LogicEntityList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_AnimationComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeAnimationInTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndStopLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LogicAnimationComponent*, float))(Il2CppBase() + 0x19AC0F0))(this, deltaTime);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(LogicAnimationComponent*, uintptr_t))(Il2CppBase() + 0x19AC3F0))(this, pawn);
	}
	template <typename T = void> T FadeAnimationInTime(int32_t animId, int32_t layer, float time) {
		return ((T (*)(LogicAnimationComponent*, int32_t, int32_t, float))(Il2CppBase() + 0x19AC4D0))(this, animId, layer, time);
	}
	template <typename T = void> T CheckAndStopLayer(int32_t layer) {
		return ((T (*)(LogicAnimationComponent*, int32_t))(Il2CppBase() + 0x19AC694))(this, layer);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LogicAnimationComponent*, float))(Il2CppBase() + 0x19AC9D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(LogicAnimationComponent*, uintptr_t))(Il2CppBase() + 0x19AC9D8))(this, P0);
	}

};

}
