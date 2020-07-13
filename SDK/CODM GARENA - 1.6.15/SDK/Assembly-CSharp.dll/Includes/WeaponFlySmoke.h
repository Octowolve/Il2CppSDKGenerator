#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFlySmoke
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFlySmoke"));
	}

	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MaxDestroyTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_StartWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_EndWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MaterialUpdaters() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& TotalDelayTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& FlyTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& TargetPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& dir() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& CurPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& SelfUpdate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LineRenderers() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_CurWidth() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_AssetManaged() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOriginPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUpdaters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetTargetPos(Il2CppVector3 start, Il2CppVector3 end) {
		return ((T (*)(WeaponFlySmoke*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4C4CD6C))(this, start, end);
	}
	template <typename T = void> T SetOriginPos(Il2CppVector3 start) {
		return ((T (*)(WeaponFlySmoke*, Il2CppVector3))(Il2CppBase() + 0x4C4D264))(this, start);
	}
	template <typename T = void> T UpdateCurPos(Il2CppVector3 curPos) {
		return ((T (*)(WeaponFlySmoke*, Il2CppVector3))(Il2CppBase() + 0x4C4D488))(this, curPos);
	}
	template <typename T = void> T Despawn() {
		return ((T (*)(WeaponFlySmoke*))(Il2CppBase() + 0x4C4D5C8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponFlySmoke*))(Il2CppBase() + 0x4C4D76C))(this);
	}
	template <typename T = void> T InitUpdaters(uintptr_t renderer) {
		return ((T (*)(WeaponFlySmoke*, uintptr_t))(Il2CppBase() + 0x4C4D05C))(this, renderer);
	}
	template <typename T = void> T UpdateMaterial() {
		return ((T (*)(WeaponFlySmoke*))(Il2CppBase() + 0x4C4DA54))(this);
	}

};

}
