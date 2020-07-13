#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetFacepicTimesShowReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetFacepicTimesShowReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _IdTimesPair() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_IdTimesPair() {
		return ((T (*)(CSSetFacepicTimesShowReq*))(Il2CppBase() + 0x51E18E0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetFacepicTimesShowReq*, bool))(Il2CppBase() + 0x51E18E8))(this, createIfMissing);
	}

};

}
