#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DismemberSetup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DismemberSetup"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CompleteMeshLODs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LimbDatas() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LimbHealths() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mbShowDisMesh() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HitGroup2LimbType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLimbData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDisMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DismemberBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DismemberSetup*))(Il2CppBase() + 0x4175C38))(this);
	}
	template <typename T = uintptr_t> T HitGroup2LimbType(uintptr_t hitGroup) {
		return ((T (*)(DismemberSetup*, uintptr_t))(Il2CppBase() + 0x4176020))(this, hitGroup);
	}
	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(DismemberSetup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4176110))(this, pawn, damageInfo);
	}
	template <typename T = uintptr_t> T GetLimbData(uintptr_t type) {
		return ((T (*)(DismemberSetup*, uintptr_t))(Il2CppBase() + 0x4176530))(this, type);
	}
	template <typename T = void> T PlayEffect(uintptr_t effPrefab, Il2CppString* socketName) {
		return ((T (*)(DismemberSetup*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4176664))(this, effPrefab, socketName);
	}
	template <typename T = void> T SpawnLimb(uintptr_t limbPrefab, Il2CppVector3 attackDirection, float force) {
		return ((T (*)(DismemberSetup*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x417681C))(this, limbPrefab, attackDirection, force);
	}
	template <typename T = void> T ShowDisMesh(bool bShowDisMesh) {
		return ((T (*)(DismemberSetup*, bool))(Il2CppBase() + 0x4175D74))(this, bShowDisMesh);
	}
	template <typename T = void> T DismemberBody(uintptr_t limbType, Il2CppVector3 attackDirection, float force) {
		return ((T (*)(DismemberSetup*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x41762BC))(this, limbType, attackDirection, force);
	}

};

}
