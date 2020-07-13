#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSHpV5OneLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSHpV5OneLevel"));
	}

	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _old_hp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _new_hp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _max_hp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _drug_decrease() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_level() {
		return ((T (*)(CSHpV5OneLevel*))(Il2CppBase() + 0x51DC858))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CSHpV5OneLevel*, int32_t))(Il2CppBase() + 0x51DC860))(this, value);
	}
	template <typename T = int32_t> T get_old_hp() {
		return ((T (*)(CSHpV5OneLevel*))(Il2CppBase() + 0x51DC868))(this);
	}
	template <typename T = void> T set_old_hp(int32_t value) {
		return ((T (*)(CSHpV5OneLevel*, int32_t))(Il2CppBase() + 0x51DC870))(this, value);
	}
	template <typename T = int32_t> T get_new_hp() {
		return ((T (*)(CSHpV5OneLevel*))(Il2CppBase() + 0x51DC878))(this);
	}
	template <typename T = void> T set_new_hp(int32_t value) {
		return ((T (*)(CSHpV5OneLevel*, int32_t))(Il2CppBase() + 0x51DC880))(this, value);
	}
	template <typename T = int32_t> T get_max_hp() {
		return ((T (*)(CSHpV5OneLevel*))(Il2CppBase() + 0x51DC888))(this);
	}
	template <typename T = void> T set_max_hp(int32_t value) {
		return ((T (*)(CSHpV5OneLevel*, int32_t))(Il2CppBase() + 0x51DC890))(this, value);
	}
	template <typename T = int32_t> T get_drug_decrease() {
		return ((T (*)(CSHpV5OneLevel*))(Il2CppBase() + 0x51DC898))(this);
	}
	template <typename T = void> T set_drug_decrease(int32_t value) {
		return ((T (*)(CSHpV5OneLevel*, int32_t))(Il2CppBase() + 0x51DC8A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSHpV5OneLevel*, bool))(Il2CppBase() + 0x51DC8A8))(this, createIfMissing);
	}

};

}
