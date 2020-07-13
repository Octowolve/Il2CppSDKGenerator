#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BoxColorSummary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BoxColorSummary"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_summary_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(BoxColorSummary*))(Il2CppBase() + 0x510D9AC))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(BoxColorSummary*, uint32_t))(Il2CppBase() + 0x510D9B4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_summary_list() {
		return ((T (*)(BoxColorSummary*))(Il2CppBase() + 0x510D9BC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BoxColorSummary*, bool))(Il2CppBase() + 0x510D9C4))(this, createIfMissing);
	}

};

}
