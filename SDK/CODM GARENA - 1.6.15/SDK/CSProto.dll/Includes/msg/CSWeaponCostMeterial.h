#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponCostMeterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeaponCostMeterial"));
	}

	template <typename T = uint64_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _Gid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _Num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_Id() {
		return ((T (*)(CSWeaponCostMeterial*))(Il2CppBase() + 0x51B6F70))(this);
	}
	template <typename T = void> T set_Id(uint64_t value) {
		return ((T (*)(CSWeaponCostMeterial*, uint64_t))(Il2CppBase() + 0x51B6F78))(this, value);
	}
	template <typename T = uint64_t> T get_Gid() {
		return ((T (*)(CSWeaponCostMeterial*))(Il2CppBase() + 0x51B6F88))(this);
	}
	template <typename T = void> T set_Gid(uint64_t value) {
		return ((T (*)(CSWeaponCostMeterial*, uint64_t))(Il2CppBase() + 0x51B6F90))(this, value);
	}
	template <typename T = int32_t> T get_Num() {
		return ((T (*)(CSWeaponCostMeterial*))(Il2CppBase() + 0x51B6FA0))(this);
	}
	template <typename T = void> T set_Num(int32_t value) {
		return ((T (*)(CSWeaponCostMeterial*, int32_t))(Il2CppBase() + 0x51B6FA8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponCostMeterial*, bool))(Il2CppBase() + 0x51B6FB0))(this, createIfMissing);
	}

};

}
