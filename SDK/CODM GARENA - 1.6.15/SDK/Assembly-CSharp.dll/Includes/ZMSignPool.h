#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZMSignPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZMSignPool"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ZMPawnList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ZMSignItemDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UPDATE_EVERY_FRAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Counter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& EYE_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Mount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnMount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InnerUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Spawn(uintptr_t zombiePawn) {
		return ((T (*)(ZMSignPool*, uintptr_t))(Il2CppBase() + 0x4DDC688))(this, zombiePawn);
	}
	template <typename T = void> T Despawn(uintptr_t zombiePawn) {
		return ((T (*)(ZMSignPool*, uintptr_t))(Il2CppBase() + 0x4DDC85C))(this, zombiePawn);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ZMSignPool*))(Il2CppBase() + 0x4DDCB38))(this);
	}
	template <typename T = uintptr_t> T Mount(uintptr_t zombiePawn) {
		return ((T (*)(ZMSignPool*, uintptr_t))(Il2CppBase() + 0x4DDD7A0))(this, zombiePawn);
	}
	template <typename T = void> T UnMount(uintptr_t zombiePawn) {
		return ((T (*)(ZMSignPool*, uintptr_t))(Il2CppBase() + 0x4DDD5F8))(this, zombiePawn);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZMSignPool*))(Il2CppBase() + 0x4DDDA9C))(this);
	}
	template <typename T = void> T InnerUpdate() {
		return ((T (*)(ZMSignPool*))(Il2CppBase() + 0x4DDDC2C))(this);
	}
	template <typename T = bool> static T CheckHeight(uintptr_t pawn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DDE154))(0, pawn);
	}
	template <typename T = bool> static T CheckDistance(uintptr_t pawn, uintptr_t* distance) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DDE388))(0, pawn, distance);
	}
	template <typename T = bool> static T CheckAngle(uintptr_t pawn, uintptr_t* angle) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DDE570))(0, pawn, angle);
	}

};

}
