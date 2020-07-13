#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountClientMapIdReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountClientMapIdReq"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& _loaded_map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _quest_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uint32_t>*> T get_loaded_map_id() {
		return ((T (*)(CSAccountClientMapIdReq*))(Il2CppBase() + 0x516FBF0))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_quest_id() {
		return ((T (*)(CSAccountClientMapIdReq*))(Il2CppBase() + 0x516FBF8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountClientMapIdReq*, bool))(Il2CppBase() + 0x516FC00))(this, createIfMissing);
	}

};

}
