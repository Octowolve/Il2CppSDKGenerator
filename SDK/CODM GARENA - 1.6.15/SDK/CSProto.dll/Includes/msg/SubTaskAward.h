#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SubTaskAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SubTaskAward"));
	}

	template <typename T = int32_t> T& _Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _Num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _Time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _AgingType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_Type() {
		return ((T (*)(SubTaskAward*))(Il2CppBase() + 0x51A9B58))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(SubTaskAward*, int32_t))(Il2CppBase() + 0x51A9B60))(this, value);
	}
	template <typename T = uint64_t> T get_Id() {
		return ((T (*)(SubTaskAward*))(Il2CppBase() + 0x51A9B68))(this);
	}
	template <typename T = void> T set_Id(uint64_t value) {
		return ((T (*)(SubTaskAward*, uint64_t))(Il2CppBase() + 0x51A9B70))(this, value);
	}
	template <typename T = int32_t> T get_Num() {
		return ((T (*)(SubTaskAward*))(Il2CppBase() + 0x51A9B80))(this);
	}
	template <typename T = void> T set_Num(int32_t value) {
		return ((T (*)(SubTaskAward*, int32_t))(Il2CppBase() + 0x51A9B88))(this, value);
	}
	template <typename T = int32_t> T get_Time() {
		return ((T (*)(SubTaskAward*))(Il2CppBase() + 0x51A9B90))(this);
	}
	template <typename T = void> T set_Time(int32_t value) {
		return ((T (*)(SubTaskAward*, int32_t))(Il2CppBase() + 0x51A9B98))(this, value);
	}
	template <typename T = int32_t> T get_AgingType() {
		return ((T (*)(SubTaskAward*))(Il2CppBase() + 0x51A9BA0))(this);
	}
	template <typename T = void> T set_AgingType(int32_t value) {
		return ((T (*)(SubTaskAward*, int32_t))(Il2CppBase() + 0x51A9BA8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SubTaskAward*, bool))(Il2CppBase() + 0x51A9BB0))(this, createIfMissing);
	}

};

}
