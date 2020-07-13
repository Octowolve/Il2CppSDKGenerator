#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassUpdateDataNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassUpdateDataNtf"));
	}

	template <typename T = uintptr_t> T& _battle_pass_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_battle_pass_data() {
		return ((T (*)(CSBattlePassUpdateDataNtf*))(Il2CppBase() + 0x51E550C))(this);
	}
	template <typename T = void> T set_battle_pass_data(uintptr_t value) {
		return ((T (*)(CSBattlePassUpdateDataNtf*, uintptr_t))(Il2CppBase() + 0x51E5514))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassUpdateDataNtf*, bool))(Il2CppBase() + 0x51E551C))(this, createIfMissing);
	}

};

}
