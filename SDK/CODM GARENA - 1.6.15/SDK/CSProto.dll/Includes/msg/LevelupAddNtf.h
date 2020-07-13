#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LevelupAddNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LevelupAddNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _unlock_level_task() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_unlock_level_task() {
		return ((T (*)(LevelupAddNtf*))(Il2CppBase() + 0x4EA2900))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LevelupAddNtf*, bool))(Il2CppBase() + 0x4EA2908))(this, createIfMissing);
	}

};

}
