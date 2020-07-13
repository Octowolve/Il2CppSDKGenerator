#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ImmediateUseConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ImmediateUseConfig"));
	}

	template <typename T = int32_t> T& GoodsID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Immediateuse() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Style() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ImmediateUseConfig*))(Il2CppBase() + 0x37643A4))(this);
	}
	template <typename T = int32_t> T get_GoodsID() {
		return ((T (*)(ImmediateUseConfig*))(Il2CppBase() + 0x3764444))(this);
	}
	template <typename T = void> T set_GoodsID(int32_t value) {
		return ((T (*)(ImmediateUseConfig*, int32_t))(Il2CppBase() + 0x376444C))(this, value);
	}
	template <typename T = int32_t> T get_Immediateuse() {
		return ((T (*)(ImmediateUseConfig*))(Il2CppBase() + 0x3764454))(this);
	}
	template <typename T = void> T set_Immediateuse(int32_t value) {
		return ((T (*)(ImmediateUseConfig*, int32_t))(Il2CppBase() + 0x376445C))(this, value);
	}
	template <typename T = int32_t> T get_Style() {
		return ((T (*)(ImmediateUseConfig*))(Il2CppBase() + 0x3764464))(this);
	}
	template <typename T = void> T set_Style(int32_t value) {
		return ((T (*)(ImmediateUseConfig*, int32_t))(Il2CppBase() + 0x376446C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ImmediateUseConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3764474))(this, bytes, position);
	}

};

}
