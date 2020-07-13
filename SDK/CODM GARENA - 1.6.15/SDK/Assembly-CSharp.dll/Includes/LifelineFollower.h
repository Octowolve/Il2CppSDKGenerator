#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineFollower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineFollower"));
	}

	template <typename T = uintptr_t> T& Group() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LifelineFollowerState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& MasterID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& FollowerID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Follower() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryRunningLifelineFollower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Group() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x4933CA4))(this);
	}
	template <typename T = void> T set_Group(uintptr_t value) {
		return ((T (*)(LifelineFollower*, uintptr_t))(Il2CppBase() + 0x4933C84))(this, value);
	}
	template <typename T = uintptr_t> T get_LifelineFollowerState() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x4933CAC))(this);
	}
	template <typename T = void> T set_LifelineFollowerState(uintptr_t value) {
		return ((T (*)(LifelineFollower*, uintptr_t))(Il2CppBase() + 0x4933C9C))(this, value);
	}
	template <typename T = uint32_t> T get_MasterID() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x4933CB4))(this);
	}
	template <typename T = void> T set_MasterID(uint32_t value) {
		return ((T (*)(LifelineFollower*, uint32_t))(Il2CppBase() + 0x4933C8C))(this, value);
	}
	template <typename T = uint32_t> T get_FollowerID() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x4933CBC))(this);
	}
	template <typename T = void> T set_FollowerID(uint32_t value) {
		return ((T (*)(LifelineFollower*, uint32_t))(Il2CppBase() + 0x4933C94))(this, value);
	}
	template <typename T = uintptr_t> T get_Follower() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x4933CC4))(this);
	}
	template <typename T = void> T set_Follower(uintptr_t value) {
		return ((T (*)(LifelineFollower*, uintptr_t))(Il2CppBase() + 0x4933CCC))(this, value);
	}
	template <typename T = uintptr_t> T get_Effect() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x4933CD4))(this);
	}
	template <typename T = void> T set_Effect(uintptr_t value) {
		return ((T (*)(LifelineFollower*, uintptr_t))(Il2CppBase() + 0x4933CDC))(this, value);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x4933CE4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LifelineFollower*, float))(Il2CppBase() + 0x49340E0))(this, deltaTime);
	}
	template <typename T = bool> T TryRunningLifelineFollower() {
		return ((T (*)(LifelineFollower*))(Il2CppBase() + 0x49342D0))(this);
	}

};

}
