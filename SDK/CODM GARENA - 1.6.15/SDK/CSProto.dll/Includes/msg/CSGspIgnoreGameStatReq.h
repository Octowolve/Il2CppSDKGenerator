#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspIgnoreGameStatReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGspIgnoreGameStatReq"));
	}

	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGspIgnoreGameStatReq*))(Il2CppBase() + 0x51D9FC0))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGspIgnoreGameStatReq*, uint32_t))(Il2CppBase() + 0x51D9FC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspIgnoreGameStatReq*, bool))(Il2CppBase() + 0x51D9FD0))(this, createIfMissing);
	}

};

}
