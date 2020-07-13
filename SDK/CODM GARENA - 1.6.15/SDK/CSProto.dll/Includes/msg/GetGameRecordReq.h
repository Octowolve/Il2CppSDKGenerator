#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GetGameRecordReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GetGameRecordReq"));
	}

	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(GetGameRecordReq*))(Il2CppBase() + 0x50CD840))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(GetGameRecordReq*, uint64_t))(Il2CppBase() + 0x50CD848))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GetGameRecordReq*, bool))(Il2CppBase() + 0x50CD858))(this, createIfMissing);
	}

};

}
