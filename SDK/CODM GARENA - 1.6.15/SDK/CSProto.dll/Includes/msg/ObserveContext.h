#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ObserveContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ObserveContext"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& _loaded_quest_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uint32_t>*> T get_loaded_quest_id() {
		return ((T (*)(ObserveContext*))(Il2CppBase() + 0x4EA5810))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ObserveContext*, bool))(Il2CppBase() + 0x4EA5818))(this, createIfMissing);
	}

};

}
