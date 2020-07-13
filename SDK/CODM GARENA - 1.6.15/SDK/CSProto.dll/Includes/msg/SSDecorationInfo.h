#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSDecorationInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSDecorationInfo"));
	}

	template <typename T = uint32_t> T& _ornament() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _crosshair() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_ornament() {
		return ((T (*)(SSDecorationInfo*))(Il2CppBase() + 0x51A90FC))(this);
	}
	template <typename T = void> T set_ornament(uint32_t value) {
		return ((T (*)(SSDecorationInfo*, uint32_t))(Il2CppBase() + 0x51A9104))(this, value);
	}
	template <typename T = uint32_t> T get_crosshair() {
		return ((T (*)(SSDecorationInfo*))(Il2CppBase() + 0x51A910C))(this);
	}
	template <typename T = void> T set_crosshair(uint32_t value) {
		return ((T (*)(SSDecorationInfo*, uint32_t))(Il2CppBase() + 0x51A9114))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSDecorationInfo*, bool))(Il2CppBase() + 0x51A911C))(this, createIfMissing);
	}

};

}
