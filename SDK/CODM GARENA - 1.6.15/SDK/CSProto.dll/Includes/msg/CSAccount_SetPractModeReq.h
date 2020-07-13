#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetPractModeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_SetPractModeReq"));
	}

	template <typename T = Il2CppList<float>*> T& _sptutorail_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<float>*> T get_sptutorail_time() {
		return ((T (*)(CSAccountSetPractModeReq*))(Il2CppBase() + 0x516F734))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetPractModeReq*, bool))(Il2CppBase() + 0x516F73C))(this, createIfMissing);
	}

};

}
