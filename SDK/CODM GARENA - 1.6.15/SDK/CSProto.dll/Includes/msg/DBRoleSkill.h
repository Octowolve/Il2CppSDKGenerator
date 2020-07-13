#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBRoleSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBRoleSkill"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _HostInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBRoleSkill*))(Il2CppBase() + 0x51B9538))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBRoleSkill*, uintptr_t))(Il2CppBase() + 0x51B9540))(this, value);
	}
	template <typename T = uintptr_t> T get_HostInfo() {
		return ((T (*)(DBRoleSkill*))(Il2CppBase() + 0x51B9548))(this);
	}
	template <typename T = void> T set_HostInfo(uintptr_t value) {
		return ((T (*)(DBRoleSkill*, uintptr_t))(Il2CppBase() + 0x51B9550))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBRoleSkill*, bool))(Il2CppBase() + 0x51B9558))(this, createIfMissing);
	}

};

}
