#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerPosition"));
	}

	template <typename T = float> T& _x() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& _y() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& _z() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = float> T get_x() {
		return ((T (*)(PlayerPosition*))(Il2CppBase() + 0x4EA8E04))(this);
	}
	template <typename T = void> T set_x(float value) {
		return ((T (*)(PlayerPosition*, float))(Il2CppBase() + 0x4EA8E0C))(this, value);
	}
	template <typename T = float> T get_y() {
		return ((T (*)(PlayerPosition*))(Il2CppBase() + 0x4EA8E14))(this);
	}
	template <typename T = void> T set_y(float value) {
		return ((T (*)(PlayerPosition*, float))(Il2CppBase() + 0x4EA8E1C))(this, value);
	}
	template <typename T = float> T get_z() {
		return ((T (*)(PlayerPosition*))(Il2CppBase() + 0x4EA8E24))(this);
	}
	template <typename T = void> T set_z(float value) {
		return ((T (*)(PlayerPosition*, float))(Il2CppBase() + 0x4EA8E2C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerPosition*, bool))(Il2CppBase() + 0x4EA8E34))(this, createIfMissing);
	}

};

}
