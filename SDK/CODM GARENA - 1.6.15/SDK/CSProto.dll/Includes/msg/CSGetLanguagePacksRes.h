#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetLanguagePacksRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetLanguagePacksRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGetLanguagePacksRes*))(Il2CppBase() + 0x5216E38))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGetLanguagePacksRes*, uint32_t))(Il2CppBase() + 0x5216E40))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_items() {
		return ((T (*)(CSGetLanguagePacksRes*))(Il2CppBase() + 0x5216E48))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetLanguagePacksRes*, bool))(Il2CppBase() + 0x5216E50))(this, createIfMissing);
	}

};

}
