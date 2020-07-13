#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Signboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Signboard"));
	}

	template <typename T = Il2CppVector3> T& SignTargetOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& SignTargetScreenOfffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BoardGO() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& DirGO() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& ScreenEdgeOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Distance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& AlwaysRotDirGO() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& bForceFade() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AlphaData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsOnScreenSide() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_SignTarget() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_GetTargetPosDel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& FadeConfigData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& CurDistToCenter() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& localPosXY() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetTargetPosDel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSignTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSignTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSignboardActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignboardActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T SetGetTargetPosDel(uintptr_t del) {
		return ((T (*)(Signboard*, uintptr_t))(Il2CppBase() + 0x38DDDD0))(this, del);
	}
	template <typename T = void> T SetSignTarget(uintptr_t signTarget) {
		return ((T (*)(Signboard*, uintptr_t))(Il2CppBase() + 0x38DDE78))(this, signTarget);
	}
	template <typename T = bool> T IsSignTarget() {
		return ((T (*)(Signboard*))(Il2CppBase() + 0x38DDF20))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Signboard*))(Il2CppBase() + 0x38DE00C))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetPos() {
		return ((T (*)(Signboard*))(Il2CppBase() + 0x38DEC9C))(this);
	}
	template <typename T = void> T UpdateSignboard() {
		return ((T (*)(Signboard*))(Il2CppBase() + 0x38DE0B0))(this);
	}
	template <typename T = void> T SetSignboardActive(bool isActive) {
		return ((T (*)(Signboard*, bool))(Il2CppBase() + 0x38DEEF8))(this, isActive);
	}
	template <typename T = bool> T GetSignboardActive() {
		return ((T (*)(Signboard*))(Il2CppBase() + 0x38DEFC8))(this);
	}
	template <typename T = void> T UpdateAlpha() {
		return ((T (*)(Signboard*))(Il2CppBase() + 0x38DF08C))(this);
	}
	template <typename T = void> T ChangAlpha(float newAlpha) {
		return ((T (*)(Signboard*, float))(Il2CppBase() + 0x38DF6EC))(this, newAlpha);
	}

};

}
