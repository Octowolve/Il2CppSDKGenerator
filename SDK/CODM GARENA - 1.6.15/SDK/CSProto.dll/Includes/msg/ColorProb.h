#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ColorProb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ColorProb"));
	}

	template <typename T = uint32_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = double> T& _prob() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_color() {
		return ((T (*)(ColorProb*))(Il2CppBase() + 0x516EC04))(this);
	}
	template <typename T = void> T set_color(uint32_t value) {
		return ((T (*)(ColorProb*, uint32_t))(Il2CppBase() + 0x516EC0C))(this, value);
	}
	template <typename T = double> T get_prob() {
		return ((T (*)(ColorProb*))(Il2CppBase() + 0x516EC14))(this);
	}
	template <typename T = void> T set_prob(double value) {
		return ((T (*)(ColorProb*, double))(Il2CppBase() + 0x516EC20))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ColorProb*, bool))(Il2CppBase() + 0x516EC30))(this, createIfMissing);
	}

};

}
