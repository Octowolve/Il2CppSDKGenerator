#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetPicRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetPicRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _unlocked_pic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSInventoryGetPicRes*))(Il2CppBase() + 0x5137E90))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSInventoryGetPicRes*, uint32_t))(Il2CppBase() + 0x5137E98))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_unlocked_pic() {
		return ((T (*)(CSInventoryGetPicRes*))(Il2CppBase() + 0x5137EA0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetPicRes*, bool))(Il2CppBase() + 0x5137EA8))(this, createIfMissing);
	}

};

}
