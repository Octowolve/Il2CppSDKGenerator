#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class JetPack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "JetPack"));
	}

	template <typename T = Il2CppVector3> T& m_JetPackScale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_JetpackAnimator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_OldAnimController() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_LeftEffect_Trail() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_RightEffect_Trail() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_LeftEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_RightEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LastTrailLerpRate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_PressTime_FB() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_PressTime_LR() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowJetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTrailEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrailEffectAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetParam(Il2CppVector3 scale) {
		return ((T (*)(JetPack*, Il2CppVector3))(Il2CppBase() + 0x3D52224))(this, scale);
	}
	template <typename T = void> T PreloadRes() {
		return ((T (*)(JetPack*))(Il2CppBase() + 0x3D522F4))(this);
	}
	template <typename T = void> T BindPlayer(uintptr_t owner) {
		return ((T (*)(JetPack*, uintptr_t))(Il2CppBase() + 0x3D52AD8))(this, owner);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(JetPack*))(Il2CppBase() + 0x3D52DAC))(this);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(JetPack*))(Il2CppBase() + 0x3D52EFC))(this);
	}
	template <typename T = void> T UpdateSkydivingAnim(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(JetPack*, Il2CppVector2, float))(Il2CppBase() + 0x3D5315C))(this, movementInput, deltaTime);
	}
	template <typename T = void> T ShowJetEffect(bool show) {
		return ((T (*)(JetPack*, bool))(Il2CppBase() + 0x3D52930))(this, show);
	}
	template <typename T = void> T ShowTrailEffect(bool show) {
		return ((T (*)(JetPack*, bool))(Il2CppBase() + 0x3D52760))(this, show);
	}
	template <typename T = void> T SetTrailEffectAlpha(float lerpRate) {
		return ((T (*)(JetPack*, float))(Il2CppBase() + 0x3D53530))(this, lerpRate);
	}

};

}
