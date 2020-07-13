#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MissionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MissionData"));
	}

	template <typename T = int32_t> T& _finish_count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_finish_count() {
		return ((T (*)(MissionData*))(Il2CppBase() + 0x4EA52C8))(this);
	}
	template <typename T = void> T set_finish_count(int32_t value) {
		return ((T (*)(MissionData*, int32_t))(Il2CppBase() + 0x4EA52D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MissionData*, bool))(Il2CppBase() + 0x4EA52D8))(this, createIfMissing);
	}

};

}
