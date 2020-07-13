#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerDeadPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerDeadPosition"));
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
		return ((T (*)(PlayerDeadPosition*))(Il2CppBase() + 0x4EA690C))(this);
	}
	template <typename T = void> T set_x(float value) {
		return ((T (*)(PlayerDeadPosition*, float))(Il2CppBase() + 0x4EA6914))(this, value);
	}
	template <typename T = float> T get_y() {
		return ((T (*)(PlayerDeadPosition*))(Il2CppBase() + 0x4EA691C))(this);
	}
	template <typename T = void> T set_y(float value) {
		return ((T (*)(PlayerDeadPosition*, float))(Il2CppBase() + 0x4EA6924))(this, value);
	}
	template <typename T = float> T get_z() {
		return ((T (*)(PlayerDeadPosition*))(Il2CppBase() + 0x4EA692C))(this);
	}
	template <typename T = void> T set_z(float value) {
		return ((T (*)(PlayerDeadPosition*, float))(Il2CppBase() + 0x4EA6934))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerDeadPosition*, bool))(Il2CppBase() + 0x4EA693C))(this, createIfMissing);
	}

};

}
