#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Components {

class MultiTriggerFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Components", "MultiTriggerFilter"));
	}

	template <typename T = int32_t> static T& INVALID_PAWN_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<int32_t>*> T& mEnteredPawnID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mEnteredPawnCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFilterEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFilterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsPawnID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPawnID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RmPawnID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_PawnCount() {
		return ((T (*)(MultiTriggerFilter*))(Il2CppBase() + 0x44D98D8))(this);
	}
	template <typename T = bool> T NeedFilterEnter(int32_t iPawnID) {
		return ((T (*)(MultiTriggerFilter*, int32_t))(Il2CppBase() + 0x44D98E0))(this, iPawnID);
	}
	template <typename T = bool> T NeedFilterExit(int32_t iPawnID) {
		return ((T (*)(MultiTriggerFilter*, int32_t))(Il2CppBase() + 0x44D9AD8))(this, iPawnID);
	}
	template <typename T = void> T WriteDebugInfo(uintptr_t sbBuffer) {
		return ((T (*)(MultiTriggerFilter*, uintptr_t))(Il2CppBase() + 0x44D9B8C))(this, sbBuffer);
	}
	template <typename T = bool> T ContainsPawnID(int32_t iPawnID) {
		return ((T (*)(MultiTriggerFilter*, int32_t))(Il2CppBase() + 0x44D9990))(this, iPawnID);
	}
	template <typename T = bool> T AddPawnID(int32_t iPawnID) {
		return ((T (*)(MultiTriggerFilter*, int32_t))(Il2CppBase() + 0x44D9CE0))(this, iPawnID);
	}
	template <typename T = bool> T RmPawnID(int32_t iPawnID) {
		return ((T (*)(MultiTriggerFilter*, int32_t))(Il2CppBase() + 0x44D9EE8))(this, iPawnID);
	}
	template <typename T = Il2CppList<int32_t>*> T get_EnteredPawnID() {
		return ((T (*)(MultiTriggerFilter*))(Il2CppBase() + 0x44DA074))(this);
	}

};

}
