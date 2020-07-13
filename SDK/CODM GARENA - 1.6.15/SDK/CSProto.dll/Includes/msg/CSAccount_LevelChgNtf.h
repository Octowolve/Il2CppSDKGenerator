#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountLevelChgNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_LevelChgNtf"));
	}

	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _level_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _old_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_level() {
		return ((T (*)(CSAccountLevelChgNtf*))(Il2CppBase() + 0x516F634))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CSAccountLevelChgNtf*, int32_t))(Il2CppBase() + 0x516F63C))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(CSAccountLevelChgNtf*))(Il2CppBase() + 0x516F644))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(CSAccountLevelChgNtf*, int32_t))(Il2CppBase() + 0x516F64C))(this, value);
	}
	template <typename T = int32_t> T get_level_type() {
		return ((T (*)(CSAccountLevelChgNtf*))(Il2CppBase() + 0x516F654))(this);
	}
	template <typename T = void> T set_level_type(int32_t value) {
		return ((T (*)(CSAccountLevelChgNtf*, int32_t))(Il2CppBase() + 0x516F65C))(this, value);
	}
	template <typename T = int32_t> T get_old_level() {
		return ((T (*)(CSAccountLevelChgNtf*))(Il2CppBase() + 0x516F664))(this);
	}
	template <typename T = void> T set_old_level(int32_t value) {
		return ((T (*)(CSAccountLevelChgNtf*, int32_t))(Il2CppBase() + 0x516F66C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountLevelChgNtf*, bool))(Il2CppBase() + 0x516F674))(this, createIfMissing);
	}

};

}
