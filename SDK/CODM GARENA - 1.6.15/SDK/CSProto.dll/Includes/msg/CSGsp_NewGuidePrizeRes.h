#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspNewGuidePrizeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_NewGuidePrizeRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGspNewGuidePrizeRes*))(Il2CppBase() + 0x51D9E8C))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGspNewGuidePrizeRes*, uint32_t))(Il2CppBase() + 0x51D9E94))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSGspNewGuidePrizeRes*))(Il2CppBase() + 0x51D9E9C))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSGspNewGuidePrizeRes*))(Il2CppBase() + 0x51D9EA4))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSGspNewGuidePrizeRes*, bool))(Il2CppBase() + 0x51D9EAC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspNewGuidePrizeRes*, bool))(Il2CppBase() + 0x51D9EB4))(this, createIfMissing);
	}

};

}
