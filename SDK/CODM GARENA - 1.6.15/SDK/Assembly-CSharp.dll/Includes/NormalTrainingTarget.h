#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NormalTrainingTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NormalTrainingTarget"));
	}

	template <typename T = int32_t> T& m_MaxHitNum() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_RecoverTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_HitGroupLimit() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DamageTypeLimit() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ColorObjs() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_NormalColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_HitColor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_TargetRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_FallDownTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_AniTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_AniStartAngle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_AniEndAngle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_HitNum() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_IsShowHitColor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Colliders() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ColorMts() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFallDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCollidersState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(NormalTrainingTarget*))(Il2CppBase() + 0x3EDF1E4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NormalTrainingTarget*))(Il2CppBase() + 0x3EDF1F8))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(NormalTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3EDF3F4))(this, pawn);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(NormalTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3EDF4CC))(this, damageInfo);
	}
	template <typename T = bool> T CheckHitGroup(uintptr_t damageInfo) {
		return ((T (*)(NormalTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3EDF5DC))(this, damageInfo);
	}
	template <typename T = bool> T CheckDamageType(uintptr_t damageInfo) {
		return ((T (*)(NormalTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3EDF704))(this, damageInfo);
	}
	template <typename T = void> T ChangeColor() {
		return ((T (*)(NormalTrainingTarget*))(Il2CppBase() + 0x3EDF82C))(this);
	}
	template <typename T = void> T OnFallDown() {
		return ((T (*)(NormalTrainingTarget*))(Il2CppBase() + 0x3EDF988))(this);
	}
	template <typename T = uintptr_t> T Recover() {
		return ((T (*)(NormalTrainingTarget*))(Il2CppBase() + 0x3EDFB78))(this);
	}
	template <typename T = void> T SetCollidersState(bool isEnable) {
		return ((T (*)(NormalTrainingTarget*, bool))(Il2CppBase() + 0x3EDFA60))(this, isEnable);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NormalTrainingTarget*))(Il2CppBase() + 0x3EDFC60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(NormalTrainingTarget*))(Il2CppBase() + 0x3EDFE28))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(NormalTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3EDFE30))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(NormalTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3EDFE38))(this, P0);
	}

};

}
