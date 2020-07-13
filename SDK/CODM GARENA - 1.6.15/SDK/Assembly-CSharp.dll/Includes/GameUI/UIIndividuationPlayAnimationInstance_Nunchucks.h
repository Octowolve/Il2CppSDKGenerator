#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIIndividuationPlayAnimationInstanceNunchucks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIIndividuationPlayAnimationInstance_Nunchucks"));
	}

	template <typename T = uintptr_t> T& m_WeaponTargetGo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_WeaponAssetId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_HeartFingerAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& RootBone() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bones() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_AnimationTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_PostAnimtionTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PlayAnimation(Il2CppString* stateName) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceNunchucks*, Il2CppString*))(Il2CppBase() + 0x3AF0954))(this, stateName);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x3AF0BE8))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x3AF0C8C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceNunchucks*, float))(Il2CppBase() + 0x3AF11C0))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnimation(Il2CppString* P0) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceNunchucks*, Il2CppString*))(Il2CppBase() + 0x3AF1B08))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x3AF1B0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceNunchucks*, float))(Il2CppBase() + 0x3AF1B10))(this, P0);
	}

};

}
