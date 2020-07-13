#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AttendAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AttendAward"));
	}

	template <typename T = uint64_t> T& _itemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _itemNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_itemId() {
		return ((T (*)(AttendAward*))(Il2CppBase() + 0x510C6C0))(this);
	}
	template <typename T = void> T set_itemId(uint64_t value) {
		return ((T (*)(AttendAward*, uint64_t))(Il2CppBase() + 0x510C6C8))(this, value);
	}
	template <typename T = uint32_t> T get_itemNum() {
		return ((T (*)(AttendAward*))(Il2CppBase() + 0x510C6D8))(this);
	}
	template <typename T = void> T set_itemNum(uint32_t value) {
		return ((T (*)(AttendAward*, uint32_t))(Il2CppBase() + 0x510C6E0))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(AttendAward*))(Il2CppBase() + 0x510C6E8))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(AttendAward*, int32_t))(Il2CppBase() + 0x510C6F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AttendAward*, bool))(Il2CppBase() + 0x510C6F8))(this, createIfMissing);
	}

};

}
