#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SyncGameNetMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SyncGameNetMsg"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseINT8Msg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseINT32Msg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t InNetVarLength) {
		return ((T (*)(SyncGameNetMsg*, uintptr_t))(Il2CppBase() + 0x4EB2A64))(this, InNetVarLength);
	}
	template <typename T = int32_t> static T OnBuildResponseINT8Msg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4EB2C6C))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = int32_t> static T OnBuildResponseINT32Msg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4EB2DF8))(0, data, DataIndex, DataCount, Sequence);
	}

};

}
