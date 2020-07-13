#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGMCmdReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGMCmdReq"));
	}

	template <typename T = Il2CppString*> T& _cmd_line() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_cmd_line() {
		return ((T (*)(CSGMCmdReq*))(Il2CppBase() + 0x51DD22C))(this);
	}
	template <typename T = void> T set_cmd_line(Il2CppString* value) {
		return ((T (*)(CSGMCmdReq*, Il2CppString*))(Il2CppBase() + 0x51DD234))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGMCmdReq*, bool))(Il2CppBase() + 0x51DD23C))(this, createIfMissing);
	}

};

}
