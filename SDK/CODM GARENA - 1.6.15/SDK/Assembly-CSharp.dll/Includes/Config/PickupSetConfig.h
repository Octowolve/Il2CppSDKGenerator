#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PickupSetConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PickupSetConfig"));
	}

	template <typename T = int32_t> T& SetNumber() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ComponentNumeber() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& Quantity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_SetNumber() {
		return ((T (*)(PickupSetConfig*))(Il2CppBase() + 0x378141C))(this);
	}
	template <typename T = void> T set_SetNumber(int32_t value) {
		return ((T (*)(PickupSetConfig*, int32_t))(Il2CppBase() + 0x3781424))(this, value);
	}
	template <typename T = int32_t> T get_ComponentNumeber() {
		return ((T (*)(PickupSetConfig*))(Il2CppBase() + 0x378142C))(this);
	}
	template <typename T = void> T set_ComponentNumeber(int32_t value) {
		return ((T (*)(PickupSetConfig*, int32_t))(Il2CppBase() + 0x3781434))(this, value);
	}
	template <typename T = uint32_t> T get_ItemID() {
		return ((T (*)(PickupSetConfig*))(Il2CppBase() + 0x378143C))(this);
	}
	template <typename T = void> T set_ItemID(uint32_t value) {
		return ((T (*)(PickupSetConfig*, uint32_t))(Il2CppBase() + 0x3781444))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PickupSetConfig*))(Il2CppBase() + 0x378144C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(PickupSetConfig*, Il2CppString*))(Il2CppBase() + 0x3781454))(this, value);
	}
	template <typename T = uint32_t> T get_Quantity() {
		return ((T (*)(PickupSetConfig*))(Il2CppBase() + 0x378145C))(this);
	}
	template <typename T = void> T set_Quantity(uint32_t value) {
		return ((T (*)(PickupSetConfig*, uint32_t))(Il2CppBase() + 0x3781464))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PickupSetConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378146C))(this, bytes, position);
	}

};

}
