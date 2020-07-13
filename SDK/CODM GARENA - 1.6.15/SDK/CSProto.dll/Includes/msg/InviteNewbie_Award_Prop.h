#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class InviteNewbieAwardProp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "InviteNewbie_Award_Prop"));
	}

	template <typename T = int32_t> T& _condition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_condition() {
		return ((T (*)(InviteNewbieAwardProp*))(Il2CppBase() + 0x50D0A1C))(this);
	}
	template <typename T = void> T set_condition(int32_t value) {
		return ((T (*)(InviteNewbieAwardProp*, int32_t))(Il2CppBase() + 0x50D0A24))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(InviteNewbieAwardProp*))(Il2CppBase() + 0x50D0A2C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(InviteNewbieAwardProp*, bool))(Il2CppBase() + 0x50D0A34))(this, createIfMissing);
	}

};

}
