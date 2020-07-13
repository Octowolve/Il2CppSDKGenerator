#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSafeBoxGetAndUpdateRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSafeBoxGetAndUpdateRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _box_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSafeBoxGetAndUpdateRes*))(Il2CppBase() + 0x51E101C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSafeBoxGetAndUpdateRes*, int32_t))(Il2CppBase() + 0x51E1024))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_box_list() {
		return ((T (*)(CSSafeBoxGetAndUpdateRes*))(Il2CppBase() + 0x51E102C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSafeBoxGetAndUpdateRes*, bool))(Il2CppBase() + 0x51E1034))(this, createIfMissing);
	}

};

}
