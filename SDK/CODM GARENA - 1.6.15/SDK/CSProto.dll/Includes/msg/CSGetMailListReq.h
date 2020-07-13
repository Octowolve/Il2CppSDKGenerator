#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetMailListReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetMailListReq"));
	}

	template <typename T = Il2CppList<int32_t>*> T& _types() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<int32_t>*> T get_types() {
		return ((T (*)(CSGetMailListReq*))(Il2CppBase() + 0x5217280))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetMailListReq*, bool))(Il2CppBase() + 0x5217288))(this, createIfMissing);
	}

};

}
