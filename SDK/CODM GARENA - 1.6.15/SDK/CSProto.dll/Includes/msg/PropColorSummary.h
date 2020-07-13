#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropColorSummary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropColorSummary"));
	}

	template <typename T = uint32_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_color() {
		return ((T (*)(PropColorSummary*))(Il2CppBase() + 0x506ED34))(this);
	}
	template <typename T = void> T set_color(uint32_t value) {
		return ((T (*)(PropColorSummary*, uint32_t))(Il2CppBase() + 0x506ED3C))(this, value);
	}
	template <typename T = uint32_t> T get_count() {
		return ((T (*)(PropColorSummary*))(Il2CppBase() + 0x506ED44))(this);
	}
	template <typename T = void> T set_count(uint32_t value) {
		return ((T (*)(PropColorSummary*, uint32_t))(Il2CppBase() + 0x506ED4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropColorSummary*, bool))(Il2CppBase() + 0x506ED54))(this, createIfMissing);
	}

};

}
