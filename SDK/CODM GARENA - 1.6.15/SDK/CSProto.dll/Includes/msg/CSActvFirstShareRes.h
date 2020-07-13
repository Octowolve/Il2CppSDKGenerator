#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvFirstShareRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvFirstShareRes"));
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
		return ((T (*)(CSActvFirstShareRes*))(Il2CppBase() + 0x51E32BC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvFirstShareRes*, int32_t))(Il2CppBase() + 0x51E32C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSActvFirstShareRes*))(Il2CppBase() + 0x51E32CC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvFirstShareRes*, bool))(Il2CppBase() + 0x51E32D4))(this, createIfMissing);
	}

};

}
