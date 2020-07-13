#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetLanguagePacksReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetLanguagePacksReq"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& _language_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _language_code() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T get_language_index() {
		return ((T (*)(CSGetLanguagePacksReq*))(Il2CppBase() + 0x5216D60))(this);
	}
	template <typename T = uint32_t> T get_language_code() {
		return ((T (*)(CSGetLanguagePacksReq*))(Il2CppBase() + 0x5216D68))(this);
	}
	template <typename T = void> T set_language_code(uint32_t value) {
		return ((T (*)(CSGetLanguagePacksReq*, uint32_t))(Il2CppBase() + 0x5216D70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetLanguagePacksReq*, bool))(Il2CppBase() + 0x5216D78))(this, createIfMissing);
	}

};

}
