#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBPlayerClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBPlayerClass"));
	}

	template <typename T = int32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _HasDefaultConf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _MainWeaponData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _ViceWeaponData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _PerkData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _GrenadeData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(DBPlayerClass*))(Il2CppBase() + 0x51B884C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(DBPlayerClass*, int32_t))(Il2CppBase() + 0x51B8854))(this, value);
	}
	template <typename T = int32_t> T get_HasDefaultConf() {
		return ((T (*)(DBPlayerClass*))(Il2CppBase() + 0x51B885C))(this);
	}
	template <typename T = void> T set_HasDefaultConf(int32_t value) {
		return ((T (*)(DBPlayerClass*, int32_t))(Il2CppBase() + 0x51B8864))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Name() {
		return ((T (*)(DBPlayerClass*))(Il2CppBase() + 0x51B886C))(this);
	}
	template <typename T = void> T set_Name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DBPlayerClass*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B8874))(this, value);
	}
	template <typename T = uintptr_t> T get_MainWeaponData() {
		return ((T (*)(DBPlayerClass*))(Il2CppBase() + 0x51B887C))(this);
	}
	template <typename T = void> T set_MainWeaponData(uintptr_t value) {
		return ((T (*)(DBPlayerClass*, uintptr_t))(Il2CppBase() + 0x51B8884))(this, value);
	}
	template <typename T = uintptr_t> T get_ViceWeaponData() {
		return ((T (*)(DBPlayerClass*))(Il2CppBase() + 0x51B888C))(this);
	}
	template <typename T = void> T set_ViceWeaponData(uintptr_t value) {
		return ((T (*)(DBPlayerClass*, uintptr_t))(Il2CppBase() + 0x51B8894))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PerkData() {
		return ((T (*)(DBPlayerClass*))(Il2CppBase() + 0x51B889C))(this);
	}
	template <typename T = uintptr_t> T get_GrenadeData() {
		return ((T (*)(DBPlayerClass*))(Il2CppBase() + 0x51B88A4))(this);
	}
	template <typename T = void> T set_GrenadeData(uintptr_t value) {
		return ((T (*)(DBPlayerClass*, uintptr_t))(Il2CppBase() + 0x51B88AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBPlayerClass*, bool))(Il2CppBase() + 0x51B88B4))(this, createIfMissing);
	}

};

}
