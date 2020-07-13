#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RetroactiveCost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RetroactiveCost"));
	}

	template <typename T = uint32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _costNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_count() {
		return ((T (*)(RetroactiveCost*))(Il2CppBase() + 0x5071C10))(this);
	}
	template <typename T = void> T set_count(uint32_t value) {
		return ((T (*)(RetroactiveCost*, uint32_t))(Il2CppBase() + 0x5071C18))(this, value);
	}
	template <typename T = uint32_t> T get_costNum() {
		return ((T (*)(RetroactiveCost*))(Il2CppBase() + 0x5071C20))(this);
	}
	template <typename T = void> T set_costNum(uint32_t value) {
		return ((T (*)(RetroactiveCost*, uint32_t))(Il2CppBase() + 0x5071C28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RetroactiveCost*, bool))(Il2CppBase() + 0x5071C30))(this, createIfMissing);
	}

};

}
