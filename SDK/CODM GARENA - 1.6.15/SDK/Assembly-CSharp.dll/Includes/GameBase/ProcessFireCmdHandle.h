#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ProcessFireCmdHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ProcessFireCmdHandle"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_FireList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_bFiring() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_StartFireImplFunc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_StopFireImplFunc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleFirstFireCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleRangeFireCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFireCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleAllFireCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_StartFireImplFunc() {
		return ((T (*)(ProcessFireCmdHandle*))(Il2CppBase() + 0x170D0B8))(this);
	}
	template <typename T = uintptr_t> T get_StopFireImplFunc() {
		return ((T (*)(ProcessFireCmdHandle*))(Il2CppBase() + 0x170D0C0))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t playerInfo, uintptr_t startFireFunc, uintptr_t stopFireFunc, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x170D0C8))(0, playerInfo, startFireFunc, stopFireFunc, name);
	}
	template <typename T = void> T Init(uintptr_t playerInfo, uintptr_t startFireFunc, uintptr_t stopFireFunc, Il2CppString* name) {
		return ((T (*)(ProcessFireCmdHandle*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x170D1CC))(this, playerInfo, startFireFunc, stopFireFunc, name);
	}
	template <typename T = void> T Remove() {
		return ((T (*)(ProcessFireCmdHandle*))(Il2CppBase() + 0x170D35C))(this);
	}
	template <typename T = void> T RecycleFirstFireCmd() {
		return ((T (*)(ProcessFireCmdHandle*))(Il2CppBase() + 0x170D4B4))(this);
	}
	template <typename T = void> T RecycleRangeFireCmd(int32_t iIndex, int32_t iCount) {
		return ((T (*)(ProcessFireCmdHandle*, int32_t, int32_t))(Il2CppBase() + 0x170D634))(this, iIndex, iCount);
	}
	template <typename T = void> T ProcessFireCmd() {
		return ((T (*)(ProcessFireCmdHandle*))(Il2CppBase() + 0x170D804))(this);
	}
	template <typename T = void> T RecycleAllFireCmd() {
		return ((T (*)(ProcessFireCmdHandle*))(Il2CppBase() + 0x170DC44))(this);
	}

};

}
