#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMailfullWarningNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMailfullWarningNtf"));
	}

	template <typename T = int32_t> T& _mailtype() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_mailtype() {
		return ((T (*)(CSMailfullWarningNtf*))(Il2CppBase() + 0x51EFF04))(this);
	}
	template <typename T = void> T set_mailtype(int32_t value) {
		return ((T (*)(CSMailfullWarningNtf*, int32_t))(Il2CppBase() + 0x51EFF0C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMailfullWarningNtf*, bool))(Il2CppBase() + 0x51EFF14))(this, createIfMissing);
	}

};

}
