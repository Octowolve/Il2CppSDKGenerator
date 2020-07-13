#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBSkillData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBSkillData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_locked() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBSkillData*))(Il2CppBase() + 0x5226230))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBSkillData*, uintptr_t))(Il2CppBase() + 0x5226238))(this, value);
	}
	template <typename T = bool> T get_is_locked() {
		return ((T (*)(DBSkillData*))(Il2CppBase() + 0x5226240))(this);
	}
	template <typename T = void> T set_is_locked(bool value) {
		return ((T (*)(DBSkillData*, bool))(Il2CppBase() + 0x5226248))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBSkillData*, bool))(Il2CppBase() + 0x5226250))(this, createIfMissing);
	}

};

}
