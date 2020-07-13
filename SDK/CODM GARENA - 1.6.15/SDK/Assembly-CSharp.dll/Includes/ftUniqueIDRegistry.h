#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ftUniqueIDRegistry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ftUniqueIDRegistry"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& Mapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& MappingInv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deregister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstanceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T Deregister(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B64EAC))(0, id);
	}
	template <typename T = void> static T Register(int32_t id, int32_t value) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3B651D0))(0, id, value);
	}
	template <typename T = int32_t> static T GetInstanceId(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B65068))(0, id);
	}
	template <typename T = int32_t> static T GetUID(int32_t instanceId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B653D4))(0, instanceId);
	}

};

}
