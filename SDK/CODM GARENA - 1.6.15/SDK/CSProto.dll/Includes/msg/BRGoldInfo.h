#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRGoldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRGoldInfo"));
	}

	template <typename T = uint32_t> T& _rank_add_gold() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _kill_add_gold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_rank_add_gold() {
		return ((T (*)(BRGoldInfo*))(Il2CppBase() + 0x510DF58))(this);
	}
	template <typename T = void> T set_rank_add_gold(uint32_t value) {
		return ((T (*)(BRGoldInfo*, uint32_t))(Il2CppBase() + 0x510DF60))(this, value);
	}
	template <typename T = uint32_t> T get_kill_add_gold() {
		return ((T (*)(BRGoldInfo*))(Il2CppBase() + 0x510DF68))(this);
	}
	template <typename T = void> T set_kill_add_gold(uint32_t value) {
		return ((T (*)(BRGoldInfo*, uint32_t))(Il2CppBase() + 0x510DF70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRGoldInfo*, bool))(Il2CppBase() + 0x510DF78))(this, createIfMissing);
	}

};

}
