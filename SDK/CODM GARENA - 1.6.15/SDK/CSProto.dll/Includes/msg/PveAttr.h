#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveAttr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveAttr"));
	}

	template <typename T = int32_t> T& _AttrId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& _AttrValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_AttrId() {
		return ((T (*)(PveAttr*))(Il2CppBase() + 0x506F0C0))(this);
	}
	template <typename T = void> T set_AttrId(int32_t value) {
		return ((T (*)(PveAttr*, int32_t))(Il2CppBase() + 0x506F0C8))(this, value);
	}
	template <typename T = float> T get_AttrValue() {
		return ((T (*)(PveAttr*))(Il2CppBase() + 0x506F0D0))(this);
	}
	template <typename T = void> T set_AttrValue(float value) {
		return ((T (*)(PveAttr*, float))(Il2CppBase() + 0x506F0D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveAttr*, bool))(Il2CppBase() + 0x506F0E0))(this, createIfMissing);
	}

};

}
