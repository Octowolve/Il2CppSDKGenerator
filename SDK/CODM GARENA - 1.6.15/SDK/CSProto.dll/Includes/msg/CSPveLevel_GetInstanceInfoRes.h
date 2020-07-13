#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetInstanceInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetInstanceInfoRes"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _pve_instance_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _newest_pvesuffix_items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_pve_instance_list() {
		return ((T (*)(CSPveLevelGetInstanceInfoRes*))(Il2CppBase() + 0x51F1FB0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_newest_pvesuffix_items() {
		return ((T (*)(CSPveLevelGetInstanceInfoRes*))(Il2CppBase() + 0x51F1FB8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetInstanceInfoRes*, bool))(Il2CppBase() + 0x51F1FC0))(this, createIfMissing);
	}

};

}
