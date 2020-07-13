#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticsGaunsight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticsGaunsight"));
	}

	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mFoes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mCB() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mCaptureAfterCB() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mBeforeTex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mAfterTex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mBStart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mMat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mHUDMat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mHudMat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mHUDMesh() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mCurHUDRenderer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mCurCrossRenderer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mCameraView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mFirstCamera() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mRais() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_LoadAsset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& mTimeTick() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& FTick() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHUDBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopResetHUDBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FCheckState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FDrawTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsRun() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F494AC))(this);
	}
	template <typename T = void> T LoadAsset() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F494B4))(this);
	}
	template <typename T = void> T OnLoadAssets(Il2CppArray<uintptr_t>* inAssets, uintptr_t inObj) {
		return ((T (*)(TacticsGaunsight*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3F4965C))(this, inAssets, inObj);
	}
	template <typename T = void> T Init(uintptr_t weapon) {
		return ((T (*)(TacticsGaunsight*, uintptr_t))(Il2CppBase() + 0x3F4991C))(this, weapon);
	}
	template <typename T = void> T Close() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F4A80C))(this);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F4ACD0))(this);
	}
	template <typename T = bool> T UpdateShowPawn() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F4AFFC))(this);
	}
	template <typename T = void> T ResetHUDBuffer() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F4B210))(this);
	}
	template <typename T = void> T StopResetHUDBuffer() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F4B980))(this);
	}
	template <typename T = void> T ResetCommandBuffer() {
		return ((T (*)(TacticsGaunsight*))(Il2CppBase() + 0x3F4B558))(this);
	}
	template <typename T = void> T FCheckState(float delta, uintptr_t inWeapon) {
		return ((T (*)(TacticsGaunsight*, float, uintptr_t))(Il2CppBase() + 0x3F4BA70))(this, delta, inWeapon);
	}
	template <typename T = void> T FDrawTemplate(float delta, uintptr_t inWeapon) {
		return ((T (*)(TacticsGaunsight*, float, uintptr_t))(Il2CppBase() + 0x3F4BF4C))(this, delta, inWeapon);
	}
	template <typename T = void> T Tick(float deltaTime, uintptr_t inWeapon) {
		return ((T (*)(TacticsGaunsight*, float, uintptr_t))(Il2CppBase() + 0x3F4C050))(this, deltaTime, inWeapon);
	}
	template <typename T = void> T FUpdate(float delta, uintptr_t inWeapon) {
		return ((T (*)(TacticsGaunsight*, float, uintptr_t))(Il2CppBase() + 0x3F4C394))(this, delta, inWeapon);
	}

};

}
