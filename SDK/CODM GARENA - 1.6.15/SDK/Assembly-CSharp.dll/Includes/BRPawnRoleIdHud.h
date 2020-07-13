#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRPawnRoleIdHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRPawnRoleIdHud"));
	}

	template <typename T = uintptr_t> T& RobotNum() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PawnName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NameList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t uiScene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x52F8B78))(0, uiScene);
	}
	template <typename T = void> T Add(uintptr_t pawn) {
		return ((T (*)(BRPawnRoleIdHud*, uintptr_t))(Il2CppBase() + 0x52F8C9C))(this, pawn);
	}
	template <typename T = uintptr_t> T Spawn(uintptr_t pawn) {
		return ((T (*)(BRPawnRoleIdHud*, uintptr_t))(Il2CppBase() + 0x52F8E38))(this, pawn);
	}
	template <typename T = void> T Remove(uintptr_t pawn) {
		return ((T (*)(BRPawnRoleIdHud*, uintptr_t))(Il2CppBase() + 0x52F9168))(this, pawn);
	}
	template <typename T = void> T UpdateAll(float dt, int32_t aliveNum, int32_t totalNum) {
		return ((T (*)(BRPawnRoleIdHud*, float, int32_t, int32_t))(Il2CppBase() + 0x52F9328))(this, dt, aliveNum, totalNum);
	}

};

}
