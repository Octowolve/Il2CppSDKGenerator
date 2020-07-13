#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveWeaponTalent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveWeaponTalent"));
	}

	template <typename T = int64_t> T& _Guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _TalentGroupId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& _TalentIdList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int64_t> T get_Guid() {
		return ((T (*)(PveWeaponTalent*))(Il2CppBase() + 0x506FDEC))(this);
	}
	template <typename T = void> T set_Guid(int64_t value) {
		return ((T (*)(PveWeaponTalent*, int64_t))(Il2CppBase() + 0x506FDF4))(this, value);
	}
	template <typename T = uint32_t> T get_Id() {
		return ((T (*)(PveWeaponTalent*))(Il2CppBase() + 0x506FE04))(this);
	}
	template <typename T = void> T set_Id(uint32_t value) {
		return ((T (*)(PveWeaponTalent*, uint32_t))(Il2CppBase() + 0x506FE0C))(this, value);
	}
	template <typename T = int32_t> T get_TalentGroupId() {
		return ((T (*)(PveWeaponTalent*))(Il2CppBase() + 0x506FE14))(this);
	}
	template <typename T = void> T set_TalentGroupId(int32_t value) {
		return ((T (*)(PveWeaponTalent*, int32_t))(Il2CppBase() + 0x506FE1C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_TalentIdList() {
		return ((T (*)(PveWeaponTalent*))(Il2CppBase() + 0x506FE24))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveWeaponTalent*, bool))(Il2CppBase() + 0x506FE2C))(this, createIfMissing);
	}

};

}
