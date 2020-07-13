#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveInfo"));
	}

	template <typename T = int32_t> T& _level_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_level_id() {
		return ((T (*)(PveInfo*))(Il2CppBase() + 0x506F3AC))(this);
	}
	template <typename T = void> T set_level_id(int32_t value) {
		return ((T (*)(PveInfo*, int32_t))(Il2CppBase() + 0x506F3B4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveInfo*, bool))(Il2CppBase() + 0x506F3BC))(this, createIfMissing);
	}

};

}
