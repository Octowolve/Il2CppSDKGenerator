#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TargetSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TargetSignboard"));
	}

	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TargetArrow() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TipsEffect() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_TargetVolume() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& m_TargetVolumePosition_ThisFrame() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepeatTipsEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabelImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetArraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Init(uintptr_t targetVolume) {
		return ((T (*)(TargetSignboard*, uintptr_t))(Il2CppBase() + 0x29B2728))(this, targetVolume);
	}
	template <typename T = void> T DisBind() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B2C94))(this);
	}
	template <typename T = void> T RepeatTipsEffect() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B2D38))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B2E28))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B2EF8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B31C0))(this);
	}
	template <typename T = void> T UpdateSignboard() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B2980))(this);
	}
	template <typename T = void> T CheckShowBoard() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B3680))(this);
	}
	template <typename T = void> T CheckNear() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B3730))(this);
	}
	template <typename T = void> T CheckFar() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B397C))(this);
	}
	template <typename T = void> T UpdateLabel() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B330C))(this);
	}
	template <typename T = void> T UpdateLabelImpl() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B3BE0))(this);
	}
	template <typename T = void> T UpdateTargetArraw(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(TargetSignboard*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x29B34C8))(this, worldPos, clampRect);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(TargetSignboard*))(Il2CppBase() + 0x29B4098))(this);
	}

};

}
