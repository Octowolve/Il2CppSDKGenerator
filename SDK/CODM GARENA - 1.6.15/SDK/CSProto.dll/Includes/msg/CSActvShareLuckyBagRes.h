#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvShareLuckyBagRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvShareLuckyBagRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvShareLuckyBagRes*))(Il2CppBase() + 0x51E3F18))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvShareLuckyBagRes*, int32_t))(Il2CppBase() + 0x51E3F20))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSActvShareLuckyBagRes*))(Il2CppBase() + 0x51E3F28))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvShareLuckyBagRes*, bool))(Il2CppBase() + 0x51E3F30))(this, createIfMissing);
	}

};

}
