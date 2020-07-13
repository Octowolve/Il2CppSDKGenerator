#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class InjureNumberHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "InjureNumberHUD"));
	}

	template <typename T = uintptr_t> T& Number() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Style_Normal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Style_Weakpoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Style_CritNormal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Style_CritWeakpoint() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& TweenAlpha() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TargetTweenPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& BeginOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& BeginHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& EndOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& EndHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Acceleration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> static T& INTERVAL_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& RANDOM_OFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_ShowTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_Unused() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_UseTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_UseCounting() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTargetTweenPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTweenAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetPosForUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffsetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0BB58))(this);
	}
	template <typename T = void> T Init(uintptr_t hitPawn, uintptr_t damageInfo) {
		return ((T (*)(InjureNumberHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F0B698))(this, hitPawn, damageInfo);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0C60C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0CC58))(this);
	}
	template <typename T = void> T ResetTargetTweenPosition(Il2CppVector3 beginPosition, Il2CppVector3 endPosition) {
		return ((T (*)(InjureNumberHUD*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1F0C28C))(this, beginPosition, endPosition);
	}
	template <typename T = void> T ResetTweenAlpha() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0C520))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0C3F0))(this);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0C884))(this);
	}
	template <typename T = bool> T TryGetPosForUICamera(uintptr_t* pos) {
		return ((T (*)(InjureNumberHUD*, uintptr_t*))(Il2CppBase() + 0x1F0CDC4))(this, pos);
	}
	template <typename T = Il2CppVector3> T GetOffsetPos(Il2CppVector3 originPos, uintptr_t injureNumberDirection, float offset, float height) {
		return ((T (*)(InjureNumberHUD*, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x1F0BFE8))(this, originPos, injureNumberDirection, offset, height);
	}
	template <typename T = uintptr_t> T GetOffset(uintptr_t hitPawn, uintptr_t damageInfo) {
		return ((T (*)(InjureNumberHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F0BDB4))(this, hitPawn, damageInfo);
	}
	template <typename T = float> T GetRandomOffset() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0D144))(this);
	}
	template <typename T = void> T OnFinish() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0CB60))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0D254))(this);
	}
	template <typename T = void> T BeginUse() {
		return ((T (*)(InjureNumberHUD*))(Il2CppBase() + 0x1F0BCB8))(this);
	}

};

}
