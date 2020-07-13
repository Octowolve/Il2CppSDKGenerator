#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetPlayListRedDataReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetPlayListRedDataReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _need_resp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_data() {
		return ((T (*)(CSSetPlayListRedDataReq*))(Il2CppBase() + 0x51E1CA8))(this);
	}
	template <typename T = bool> T get_need_resp() {
		return ((T (*)(CSSetPlayListRedDataReq*))(Il2CppBase() + 0x51E1CB0))(this);
	}
	template <typename T = void> T set_need_resp(bool value) {
		return ((T (*)(CSSetPlayListRedDataReq*, bool))(Il2CppBase() + 0x51E1CB8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetPlayListRedDataReq*, bool))(Il2CppBase() + 0x51E1CC0))(this, createIfMissing);
	}

};

}
