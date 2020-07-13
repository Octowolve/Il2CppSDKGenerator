#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxArray"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _box_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(LuckyBoxArray*))(Il2CppBase() + 0x4EA36D4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(LuckyBoxArray*, uint64_t))(Il2CppBase() + 0x4EA36DC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_box_list() {
		return ((T (*)(LuckyBoxArray*))(Il2CppBase() + 0x4EA36EC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxArray*, bool))(Il2CppBase() + 0x4EA36F4))(this, createIfMissing);
	}

};

}
