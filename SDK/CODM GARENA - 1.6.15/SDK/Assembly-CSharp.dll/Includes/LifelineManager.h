#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineManager"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LifelineGroupList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLifelineGroupListIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFollower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveFollower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MasterChangeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaterialSetValue_Master() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FollowerChangeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLifelineManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_LifelineType() {
		return ((T (*)(LifelineManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_LifelineEffectID() {
		return ((T (*)(LifelineManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MasterEffectID() {
		return ((T (*)(LifelineManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T FindLifelineGroupListIndex(uint32_t masterID) {
		return ((T (*)(LifelineManager*, uint32_t))(Il2CppBase() + 0x49359C4))(this, masterID);
	}
	template <typename T = void> T CreateGroup(uint32_t masterID) {
		return ((T (*)(LifelineManager*, uint32_t))(Il2CppBase() + 0x4935AFC))(this, masterID);
	}
	template <typename T = void> T DestroyGroup(uint32_t masterID) {
		return ((T (*)(LifelineManager*, uint32_t))(Il2CppBase() + 0x4935C68))(this, masterID);
	}
	template <typename T = void> T AddFollower(uint32_t masterID, uint32_t followerID) {
		return ((T (*)(LifelineManager*, uint32_t, uint32_t))(Il2CppBase() + 0x4935D9C))(this, masterID, followerID);
	}
	template <typename T = void> T RemoveFollower(uint32_t masterID, uint32_t followerID) {
		return ((T (*)(LifelineManager*, uint32_t, uint32_t))(Il2CppBase() + 0x4935F4C))(this, masterID, followerID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LifelineManager*, float))(Il2CppBase() + 0x49360FC))(this, deltaTime);
	}
	template <typename T = void> T ResetMaterial(uintptr_t pawn) {
		return ((T (*)(LifelineManager*, uintptr_t))(Il2CppBase() + 0x4933E7C))(this, pawn);
	}
	template <typename T = uintptr_t> T GetMasterSrcMat() {
		return ((T (*)(LifelineManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T MasterChangeMaterial(uintptr_t pawn) {
		return ((T (*)(LifelineManager*, uintptr_t))(Il2CppBase() + 0x4934AE4))(this, pawn);
	}
	template <typename T = void> static T MaterialSetValue_Master(uintptr_t src, uintptr_t dst) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4936284))(0, src, dst);
	}
	template <typename T = void> T FollowerChangeMaterial(uintptr_t pawn) {
		return ((T (*)(LifelineManager*, uintptr_t))(Il2CppBase() + 0x4936450))(this, pawn);
	}
	template <typename T = uintptr_t> static T GetLifelineManager(uintptr_t lifelineType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49364F0))(0, lifelineType);
	}
	template <typename T = uintptr_t> static T GetRenderer(uintptr_t pawn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49345B4))(0, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LifelineManager*, float))(Il2CppBase() + 0x4936648))(this, P0);
	}

};

}
