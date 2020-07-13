#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DataPropertyBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DataPropertyBase"));
	}

	template <typename T = bool> T& DataFromBytes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RuntimeInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_DataFromBytes() {
		return ((T (*)(DataPropertyBase*))(Il2CppBase() + 0x463E298))(this);
	}
	template <typename T = void> T set_DataFromBytes(bool value) {
		return ((T (*)(DataPropertyBase*, bool))(Il2CppBase() + 0x463E2A0))(this, value);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(DataPropertyBase*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x463E2A8))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T RuntimeInit(Il2CppString* tag, int32_t offset, uintptr_t targetType) {
		return ((T (*)(DataPropertyBase*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x463E37C))(this, tag, offset, targetType);
	}

};

}
