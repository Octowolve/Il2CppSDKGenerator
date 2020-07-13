#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxOpenToMailRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxOpenToMailRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _lucky_box_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLuckyBoxOpenToMailRes*))(Il2CppBase() + 0x51EF9F8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLuckyBoxOpenToMailRes*, int32_t))(Il2CppBase() + 0x51EFA00))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_lucky_box_list() {
		return ((T (*)(CSLuckyBoxOpenToMailRes*))(Il2CppBase() + 0x51EFA08))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSLuckyBoxOpenToMailRes*))(Il2CppBase() + 0x51EFA10))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxOpenToMailRes*, bool))(Il2CppBase() + 0x51EFA18))(this, createIfMissing);
	}

};

}
