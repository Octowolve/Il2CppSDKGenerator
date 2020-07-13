#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SyncOtherPlayerInfoNetMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SyncOtherPlayerInfoNetMsg"));
	}

	template <typename T = uintptr_t> T& NetVarLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseINT8Msg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseINT32Msg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T UseInDeadReplay() {
		return ((T (*)(SyncOtherPlayerInfoNetMsg*))(Il2CppBase() + 0x4EBA590))(this);
	}
	template <typename T = void> T Init(uintptr_t InNetVarLength) {
		return ((T (*)(SyncOtherPlayerInfoNetMsg*, uintptr_t))(Il2CppBase() + 0x4EBA388))(this, InNetVarLength);
	}
	template <typename T = int32_t> static T OnBuildResponseINT8Msg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4EBA630))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = int32_t> static T OnBuildResponseINT32Msg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4EBA824))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = bool> T xLuaBaseProxy_UseInDeadReplay() {
		return ((T (*)(SyncOtherPlayerInfoNetMsg*))(Il2CppBase() + 0x4EBAA18))(this);
	}

};

}
