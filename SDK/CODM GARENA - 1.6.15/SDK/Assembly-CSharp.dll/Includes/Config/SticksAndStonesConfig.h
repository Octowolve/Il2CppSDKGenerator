#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SticksAndStonesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SticksAndStonesConfig"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Order() {
		return ((T (*)(SticksAndStonesConfig*))(Il2CppBase() + 0x30EC808))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(SticksAndStonesConfig*, int32_t))(Il2CppBase() + 0x30EC810))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(SticksAndStonesConfig*))(Il2CppBase() + 0x30EC818))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(SticksAndStonesConfig*, int32_t))(Il2CppBase() + 0x30EC820))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SticksAndStonesConfig*))(Il2CppBase() + 0x30EC828))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(SticksAndStonesConfig*, Il2CppString*))(Il2CppBase() + 0x30EC830))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SticksAndStonesConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EC838))(this, bytes, position);
	}

};

}
