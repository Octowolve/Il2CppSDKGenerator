#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSellItemRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSellItemRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _powder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSellItemRes*))(Il2CppBase() + 0x51E1430))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSellItemRes*, int32_t))(Il2CppBase() + 0x51E1438))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_items() {
		return ((T (*)(CSSellItemRes*))(Il2CppBase() + 0x51E1440))(this);
	}
	template <typename T = uint32_t> T get_powder() {
		return ((T (*)(CSSellItemRes*))(Il2CppBase() + 0x51E1448))(this);
	}
	template <typename T = void> T set_powder(uint32_t value) {
		return ((T (*)(CSSellItemRes*, uint32_t))(Il2CppBase() + 0x51E1450))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSSellItemRes*))(Il2CppBase() + 0x51E1458))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSellItemRes*, bool))(Il2CppBase() + 0x51E1460))(this, createIfMissing);
	}

};

}
