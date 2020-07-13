#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SyncDelVehicleMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SyncDelVehicleMsg"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_Content() {
		return ((T (*)(SyncDelVehicleMsg*))(Il2CppBase() + 0x4EAF9B0))(this);
	}
	template <typename T = bool> T UseInDeadReplay() {
		return ((T (*)(SyncDelVehicleMsg*))(Il2CppBase() + 0x4EAFA68))(this);
	}
	template <typename T = int32_t> static T OnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4EAFB08))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = bool> T xLuaBaseProxy_UseInDeadReplay() {
		return ((T (*)(SyncDelVehicleMsg*))(Il2CppBase() + 0x4EAFC88))(this);
	}

};

}
