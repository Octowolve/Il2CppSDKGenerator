#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetSensitivityReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetSensitivityReq"));
	}

	template <typename T = Il2CppList<int32_t>*> T& _settings() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<int32_t>*> T get_settings() {
		return ((T (*)(CSSetSensitivityReq*))(Il2CppBase() + 0x51E1E04))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetSensitivityReq*, bool))(Il2CppBase() + 0x51E1E0C))(this, createIfMissing);
	}

};

}
