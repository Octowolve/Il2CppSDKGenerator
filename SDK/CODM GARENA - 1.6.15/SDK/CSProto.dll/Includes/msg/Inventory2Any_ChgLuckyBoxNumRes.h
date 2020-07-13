#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Inventory2AnyChgLuckyBoxNumRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Inventory2Any_ChgLuckyBoxNumRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _lucky_box_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _chg_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*))(Il2CppBase() + 0x50D05E0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*, int32_t))(Il2CppBase() + 0x50D05E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_lucky_box_list() {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*))(Il2CppBase() + 0x50D05F0))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*))(Il2CppBase() + 0x50D05F8))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*, bool))(Il2CppBase() + 0x50D0600))(this, value);
	}
	template <typename T = int32_t> T get_chg_count() {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*))(Il2CppBase() + 0x50D0608))(this);
	}
	template <typename T = void> T set_chg_count(int32_t value) {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*, int32_t))(Il2CppBase() + 0x50D0610))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Inventory2AnyChgLuckyBoxNumRes*, bool))(Il2CppBase() + 0x50D0618))(this, createIfMissing);
	}

};

}
