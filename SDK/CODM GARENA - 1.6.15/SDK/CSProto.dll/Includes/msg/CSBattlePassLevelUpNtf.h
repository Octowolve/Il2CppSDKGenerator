#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassLevelUpNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassLevelUpNtf"));
	}

	template <typename T = int32_t> T& _old_level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _new_old_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_old_level() {
		return ((T (*)(CSBattlePassLevelUpNtf*))(Il2CppBase() + 0x51E5438))(this);
	}
	template <typename T = void> T set_old_level(int32_t value) {
		return ((T (*)(CSBattlePassLevelUpNtf*, int32_t))(Il2CppBase() + 0x51E5440))(this, value);
	}
	template <typename T = int32_t> T get_new_old_level() {
		return ((T (*)(CSBattlePassLevelUpNtf*))(Il2CppBase() + 0x51E5448))(this);
	}
	template <typename T = void> T set_new_old_level(int32_t value) {
		return ((T (*)(CSBattlePassLevelUpNtf*, int32_t))(Il2CppBase() + 0x51E5450))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(CSBattlePassLevelUpNtf*))(Il2CppBase() + 0x51E5458))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(CSBattlePassLevelUpNtf*, int32_t))(Il2CppBase() + 0x51E5460))(this, value);
	}
	template <typename T = uintptr_t> T get_reason() {
		return ((T (*)(CSBattlePassLevelUpNtf*))(Il2CppBase() + 0x51E5468))(this);
	}
	template <typename T = void> T set_reason(uintptr_t value) {
		return ((T (*)(CSBattlePassLevelUpNtf*, uintptr_t))(Il2CppBase() + 0x51E5470))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassLevelUpNtf*, bool))(Il2CppBase() + 0x51E5478))(this, createIfMissing);
	}

};

}
