#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxCheckRecordReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxCheckRecordReq"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(CSLuckyBoxCheckRecordReq*))(Il2CppBase() + 0x51EF510))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(CSLuckyBoxCheckRecordReq*, uint32_t))(Il2CppBase() + 0x51EF518))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxCheckRecordReq*, bool))(Il2CppBase() + 0x51EF520))(this, createIfMissing);
	}

};

}
