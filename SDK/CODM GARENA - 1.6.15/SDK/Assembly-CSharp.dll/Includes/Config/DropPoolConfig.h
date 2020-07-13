#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DropPoolConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DropPoolConfig"));
	}

	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ItemNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(DropPoolConfig*))(Il2CppBase() + 0x4642780))(this);
	}
	template <typename T = void> T set_MapID(int32_t value) {
		return ((T (*)(DropPoolConfig*, int32_t))(Il2CppBase() + 0x4642788))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(DropPoolConfig*))(Il2CppBase() + 0x4642790))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(DropPoolConfig*, int32_t))(Il2CppBase() + 0x4642798))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum() {
		return ((T (*)(DropPoolConfig*))(Il2CppBase() + 0x46427A0))(this);
	}
	template <typename T = void> T set_ItemNum(int32_t value) {
		return ((T (*)(DropPoolConfig*, int32_t))(Il2CppBase() + 0x46427A8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DropPoolConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46427B0))(this, bytes, position);
	}

};

}
