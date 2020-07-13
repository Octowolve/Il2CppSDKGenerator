#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineGroup"));
	}

	template <typename T = uintptr_t> T& Manager() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LifelineGroupState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& MasterID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Master() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_LifelineEffectID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_MasterEffectID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LifelineMasterEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LifelineFollowerList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryRunningLifelineGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MasterShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLifelineFollowerListIndex() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_Manager() {
		return ((T (*)(LifelineGroup*))(Il2CppBase() + 0x4933E74))(this);
	}
	template <typename T = void> T set_Manager(uintptr_t value) {
		return ((T (*)(LifelineGroup*, uintptr_t))(Il2CppBase() + 0x4934908))(this, value);
	}
	template <typename T = uintptr_t> T get_LifelineGroupState() {
		return ((T (*)(LifelineGroup*))(Il2CppBase() + 0x4934920))(this);
	}
	template <typename T = void> T set_LifelineGroupState(uintptr_t value) {
		return ((T (*)(LifelineGroup*, uintptr_t))(Il2CppBase() + 0x4934918))(this, value);
	}
	template <typename T = uint32_t> T get_MasterID() {
		return ((T (*)(LifelineGroup*))(Il2CppBase() + 0x4934928))(this);
	}
	template <typename T = void> T set_MasterID(uint32_t value) {
		return ((T (*)(LifelineGroup*, uint32_t))(Il2CppBase() + 0x4934910))(this, value);
	}
	template <typename T = uintptr_t> T get_Master() {
		return ((T (*)(LifelineGroup*))(Il2CppBase() + 0x49347EC))(this);
	}
	template <typename T = void> T set_Master(uintptr_t value) {
		return ((T (*)(LifelineGroup*, uintptr_t))(Il2CppBase() + 0x4934930))(this, value);
	}
	template <typename T = uintptr_t> T get_LifelineMasterEffect() {
		return ((T (*)(LifelineGroup*))(Il2CppBase() + 0x4934938))(this);
	}
	template <typename T = void> T set_LifelineMasterEffect(uintptr_t value) {
		return ((T (*)(LifelineGroup*, uintptr_t))(Il2CppBase() + 0x4934940))(this, value);
	}
	template <typename T = bool> T TryRunningLifelineGroup() {
		return ((T (*)(LifelineGroup*))(Il2CppBase() + 0x4934948))(this);
	}
	template <typename T = void> T MasterShowEffect(uintptr_t masterEffectID) {
		return ((T (*)(LifelineGroup*, uintptr_t))(Il2CppBase() + 0x4934CB8))(this, masterEffectID);
	}
	template <typename T = int32_t> T FindLifelineFollowerListIndex(uint32_t followerID) {
		return ((T (*)(LifelineGroup*, uint32_t))(Il2CppBase() + 0x4934FE8))(this, followerID);
	}
	template <typename T = void> T AddFollower(uint32_t followerID) {
		return ((T (*)(LifelineGroup*, uint32_t))(Il2CppBase() + 0x4935120))(this, followerID);
	}
	template <typename T = void> T RemoveFollower(uint32_t followerID) {
		return ((T (*)(LifelineGroup*, uint32_t))(Il2CppBase() + 0x493525C))(this, followerID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LifelineGroup*, float))(Il2CppBase() + 0x4935390))(this, deltaTime);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(LifelineGroup*))(Il2CppBase() + 0x49355E0))(this);
	}

};

}
