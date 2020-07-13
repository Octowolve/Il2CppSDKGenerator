#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountReportUserRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountReportUserRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountReportUserRes*))(Il2CppBase() + 0x5170650))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountReportUserRes*, int32_t))(Il2CppBase() + 0x5170658))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountReportUserRes*, bool))(Il2CppBase() + 0x5170660))(this, createIfMissing);
	}

};

}
